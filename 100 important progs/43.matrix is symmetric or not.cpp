//check matrix is symmetric or not
#include<iostream>
using namespace std;
main()
{
	int r,c;
	cout<<"enter the rows and columns of matrix\n";
	cin>>r>>c;
	int m[r][c];
	cout<<"matrix elements\n";
	
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{	cout<<"enter a"<<i+1<<j+1<<" : ";
		cin>>m[i][j];
	}
}

//taking transpose of matrix
int b[c][r]={0};

for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
		b[j][i]=m[i][j];
	}
}

int count =0;
if(r!=c) cout<<"matrix is not symmetric/n";
else{
	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
			if(m[i][j]!=b[i][j])
			count++;
	if(count==0) cout<<"matrix is symmetric\n";
	else
	cout<<"matrix is not symmetric\n";	
}

	
}
