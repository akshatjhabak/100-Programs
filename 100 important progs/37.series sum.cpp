//sum of harmonic progression
#include<bits/stdc++.h>
using namespace std;
float seriessum(int n)
{
	float v=0.0,i;
	for( i=1;i<=n;i++)
	v=v+(1/i);
	return v;
	}
main()
{   int n;
	cout<<"enter the number you want the series sum\n";
	cin>>n;
	cout<<"the sum of the terms is "<<seriessum(n);
}
