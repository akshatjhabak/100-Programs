#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};
node *newnode,*root;
class BinaryTree{
	public:
		void getnode();
		void preorder(node*);
		void inorder(node*);
		void postorder(node*);
		void insertnode();
		void search(int,node **,node **);
		void case_a(node*,node*);
		void case_b(node*,node*);
		void case_c(node*,node*);
		void deletenode();
		
};
void BinaryTree::getnode(){
	newnode=new node;
	cout<<"enterr item\n";
	cin>>newnode->data;
	newnode->left=NULL;
	newnode->right=NULL;
}
void BinaryTree::inorder(node* ptr)
{
	if(root==NULL)
	{cout<<"The Tree is empty\n";
	return;	
	}
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		cout<<ptr->data;
		inorder(ptr->right);
		}
}
void BinaryTree::postorder(node* ptr)
{
	if(root==NULL)
	{cout<<"The Tree is empty\n";
	return;	
	}
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->data;
		}
}
void BinaryTree::preorder(node* ptr)
{
		if(root==NULL)
	{cout<<"The Tree is empty\n";
	return;	
	}
	if(ptr!=NULL)
	{	cout<<ptr->data;
		preorder(ptr->left);
		preorder(ptr->right);
		
		}
}
void BinaryTree::insertnode()
{
	node *tree;
		if(root==NULL)
	{
		cout<<"Binary tree is empty\n";
		getnode();
		root=newnode;
		cout<<"\nCurrent elements of BST are:-\n ";
	    inorder(root);
		return;
	}
	tree=root;
	getnode();
	while(1)
	{
	    if (tree->data==newnode->data)
        {
		    cout<<"Item already in the tree"<<endl;
		    break;
	    }
	    else
	    {
			if(newnode->data>tree->data)
			{
				if(tree->right==NULL)
				{
					tree->right=newnode;
					break;
				}
				else
				tree=tree->right;
			}
			else
			{
				if(tree->left==NULL)
				{
					tree->left=newnode;
					break;
				}
				else
				tree=tree->left;
			}
	    }
    }
    cout<<"\nCurrent elements of BST are:-\n ";
	inorder(root);
}

void BinaryTree::search(int item,node **par,node **loc)
{
	node *ptr,*ptrsave;
    if (root==NULL)
    {
        *loc=NULL;
        *par=NULL;
        return;
    }
    if (item==root->data)
    {
        *loc=root;
        *par=NULL;
        return;
    }
    if (item<root->data)
        ptr=root->left;
    else
        ptr=root->right;
    ptrsave=root;
    while (ptr!=NULL)
    {
        if (item==ptr->data)
        {
            *loc=ptr;
            *par=ptrsave;
            return;
        }
        ptrsave=ptr;
        if (item<ptr->data)
            ptr=ptr->left;
	else
	    ptr=ptr->right;
    }
    *loc=NULL;
    *par=ptrsave;
}

void BinaryTree::case_a(node *par,node *loc)
{
	if (par==NULL)
    root=NULL;
    else
    {
        if(loc==par->left)
        par->left=NULL;
        else
        par->right=NULL;
    }
}
void BinaryTree::case_b(node *par,node *loc)
{
	node *child;
    if (loc->left!=NULL)
    child=loc->left;
    else
    child=loc->right;
    if(par==NULL)
    root=child;
    else
    {
        if(loc==par->left)
        par->left=child;
        else
        par->right=child;
    }
}
void BinaryTree::case_c(node *par,node *loc)
{
	node *ptr,*ptrsave,*suc,*parsuc;
    ptrsave=loc;
    ptr=loc->right;
    while(ptr->left!=NULL)
    {
        ptrsave=ptr;
        ptr=ptr->left;
    }
    suc=ptr;
    parsuc=ptrsave;
    if (suc->left==NULL && suc->right==NULL)
        case_a(parsuc,suc);
    else
        case_b(parsuc,suc);
    if (par==NULL)
    {
        root=suc;
    }
    else
    {
        if (loc==par->left)
            par->left=suc;
        else
            par->right=suc;
    }
    suc->left=loc->left;
    suc->right=loc->right;
}
void BinaryTree::deletenode()
{
	node *parent,*location;
	int item;
	cout<<"Enter the item you wish to delete\n";
	cin>>item;
    if (root==NULL)
    {
        cout<<"Binary tree is empty"<<endl;
        return;
    }
    search(item,&parent,&location);
    if (location==NULL)
    {
        cout<<"Item not present in the tree"<<endl;
        return;
    }
    if (location->left==NULL && location->right==NULL)
        case_a(parent,location);
    if (location->left!=NULL && location->right==NULL)
        case_b(parent,location);
    if (location->left==NULL && location->right!=NULL)
        case_b(parent,location);
    if (location->left!= NULL && location->right!=NULL)
        case_c(parent,location);
    free(location);
	cout<<"\nCurrent elements of BST are:-\n";
	inorder(root);   
}
main()
{
	BinaryTree obj;
	int ch,e;
	do
	{
		cout<<"_MENU_\n";
		cout<<"Press 1 to Insert Element\n";
		cout<<"Press 2 to Delete Element\n";
		cout<<"Press 3 to Inorder Traversal\n";
		cout<<"Press 4 to Preorder Traversal\n";
		cout<<"Press 5 to Postorder Traversal\n";
		cout<<"Enter your choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1: obj.insertnode();
			break;
			case 2: obj.deletenode();
			break;
			case 3: cout<<"\nInorder Traversal of BST:-\n";obj.inorder(root);
			break;
			case 4: cout<<"\nPreorder Traversal of BST:-\n";obj.preorder(root);
			break;
			case 5: cout<<"\nPostorder Traversal of BST:-\n";obj.postorder(root);
			break;
			default:cout<<"Invalid Choice\n";
			break;
		}
		cout<<"\nPress 0 to exit and anything to continue...\n";
		cin>>e;
	}while(e!=0);
}



