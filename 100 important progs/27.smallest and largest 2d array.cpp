//maximum and minimum in 2d array
#include<iostream>
using namespace std;
int main()
{	int n,m;	
	cout<<"enter the number of rows and cols"<<endl;
	cin>>n>>m;
	int a[n][m];
	cout<<"enter the elements"<<"\n";
	
	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
			
	}
	
	int max=a[0][0];
	int min=a[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
			if(a[i][j]<min)
			min=a[i][j];
		}
		
	}
	cout<"\n";
	
	cout<<"the 2d array is"<<endl;
	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";	
	}
	cout<<"maximum element is "<<max<<endl;
		cout<<"minimum element is "<<min<<endl;
	
	return 0;
	
}

	

