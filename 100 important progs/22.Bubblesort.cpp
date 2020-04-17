//bubble sort
#include<iostream>
using namespace std;
#define max 10
class sort{
	public:
		int n,a[max];
		void getdata();
		void traverse();
		void bubblesort();
		
};
void sort::getdata(){
	cout<<"enter the size of array"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
}
void sort::traverse(){
	cout<<"array elements are"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	
}
void sort::bubblesort(){
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<(n-i);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
			}
		}
	}
	cout<<"elements after bubble sort are :"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
main()
{
	sort s;
	s.getdata();
	s.traverse();
	s.bubblesort();
	
}

