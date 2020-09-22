#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m=n*4-3;
	
	char line[m];
	memset(line,'-',m);
	
	int a=97; 
	char ch[n];
	for (int i=0;i<n;i++)
	{
		ch[i]=a;
		a++;
	}
	
	int low=0;
	int high=m-1;
	int mid=low+(high-low)/2;
	int count;
	for(int i=n-1;i>=0;i--)
	{
		line[mid]=ch[i];
		for(int j=0;j<m;j++)
			cout<<line[j];
		cout<<endl;
		count=2;
		for(int j=0;j<n-i;j++)
		{
			line[mid-count]=ch[i+j];
			line[mid+count]=ch[i+j];
			count+=2;
		}
	}
	for(int i=1;i<n;i++)
	{
		line[mid]=ch[i];
		count=2;
		for(int j=1;j<n-i;j++)
		{
			line[mid+count]=ch[i+j];
			line[mid-count]=ch[i+j];
			count+=2;
		}
		line[low]='-';
		line[high]='-';
		for(int j=0;j<m;j++)
			cout<<line[j];
		cout<<endl;
		low+=2;
		high-=2;
	}
}
