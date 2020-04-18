//insertion sort
#include<iostream>
using namespace std;
#define max 10
class sort{
	public:
		int n,a[max];
		void getdata();
		void traverse();
		void insertionsort();
		
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
void sort::insertionsort(){
	int temp;
	
	for(int i=0;i<n;i++)
	{temp=a[i];
	int j=i-1;
	while(j>=0 && a[j]>temp)
	{
		a[j+1]=a[j];
		j=j-1;
	}
	a[j+1]=temp;
     }
	
	cout<<"aftere sorting"<<endl;
	for(int i=0;i<n;i++)
	cout<<a[i]<<"\t";
	
		
		
	
	
}
main()
{
	sort s;
	s.getdata();
	s.traverse();
	s.insertionsort();
}
