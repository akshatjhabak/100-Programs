//fuction which takes mat as arg and return transpose
#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,k;
	int A[5][5];
	int Transpose(int A[][5],int r,int c);
	cout<<"Enter number of rows and columns of matrix:\n";
	cin>>r>>c;
	
	cout<<"Enter elements of matrix:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		    cin>>A[i][j];
	}
	cout<<"The matrix is:\n";
    for(i=0;i<r;i++)
    {    
        for(j=0;j<c;j++)
        {
            cout<<A[i][j]<<"  ";
        }
        cout<<"\n";
    }
    Transpose(A,r,c);
	return 0;
}
int Transpose(int A[][5],int r,int c)
{
	int B[5][5];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		    B[j][i]=A[i][j];
	}
	cout<<"\n";
	cout<<"Transpose of the Matrix is:\n";
	for(int i=0;i<c;i++)
    {    
        for(int j=0;j<r;j++)
        {
            cout<<B[i][j]<<"  ";
        }
        cout<<"\n";
    }
}
