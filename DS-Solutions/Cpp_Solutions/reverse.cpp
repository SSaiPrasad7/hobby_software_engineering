#include<iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	int start=0;
	int end=size-1;
	while(start<end)
	{
		a[start]+=a[end];
		start++;
		end--;
	}
	if (size%2==0)
		size=size/2;
	else
		size=size/2+1;
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
