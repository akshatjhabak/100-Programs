//merge sort
#include<iostream>
using namespace std;
#define max 10
class sort{
	public:
		int n,a[max];
		void getdata();
		void traverse();
		void mergesort(int ,int);
		void merging(int ,int ,int);
		void valuem(int ,int);
		
};
void sort::getdata()
{
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void sort::traverse()
{
cout<<"array elements are"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
void sort::mergesort(int f,int l){
	if(f<l)
	{
		int m=(f+l)/2;
		mergesort(f,m);
		mergesort(m+1,l);
		merging(f,m,l);
	}
}
void sort::merging(int f,int m,int l)
{
	int n1=m-f+1;
	int n2=l-m;
	int L[n1+1],R[n2+1];
	for(int i=0;i<n1;i++)
	{L[i]=a[f+i];
		
	}
	for(int j=0;j<n2;j++)
	{R[j]=a[m+1+j];
		
	}
	L[n1]=10000;
	R[n2]=10000;
	int i=0,j=0;
	for(int k=f;k<=l;k++)
	{
		if(L[i]<=R[j])
		{a[k]=L[i];
			i++;
			
		}
		else
		{
			a[k]=R[j];
			j++;
		}
	}
	
}
void sort::valuem(int ,int)
{
	mergesort(0,n-1);
		cout<<"\n";
	cout<<"sorted array"<<endl;

	
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	
}
main()
{
	sort s;
	int n;
	
	s.getdata();
	s.traverse();
	s.valuem(0, n);	
}
