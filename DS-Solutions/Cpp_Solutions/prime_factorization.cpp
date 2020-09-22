#include<bits/stdc++.h>
using namespace std;
//Time complexity-O(sqrt(N)+log N)->O(sqrt(N))
int main()
{
	vector<int> V;
	int n;
	cin>>n;
	int m=n;
	for(int i=2;i*i<=m;i++)
	{
		while(n%i==0)
		{
			V.push_back(i);
			n=n/i;			
		}
	
	}
	if(n>1)
	{
		V.push_back(n);
	}
	for(int i=0;i<V.size();i++)
	{
		cout<<V[i]<<" ";
	}
}
