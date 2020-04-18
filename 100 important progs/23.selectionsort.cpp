//selection sort
#include<iostream>
using namespace std;
#define max 10
class sort{
	public:
		int n,a[max];
		void getdata();
		void traverse();
		void selectionsort();
		
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
void sort::selectionsort(){
	int temp,min;
  for( int i=0;i<n-1;i++) //for passes
  {
  	min=i;
  	for(int  j=i+1;j<=n-1;j++)
  	{if(a[j]<a[min])
  	 min=j;	
	}
	  	temp=a[i];
	    a[i]=a[min];
	  	a[min]=temp;
	  	
  }
  cout<<"\n";
   cout<<"after sorting "<<endl;
   for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
}
main()
{
	sort s;
	s.getdata();
	s.traverse();
	s.selectionsort();
	
	
}
