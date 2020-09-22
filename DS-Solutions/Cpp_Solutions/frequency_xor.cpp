#include<bits/stdc++.h>
using namespace std;
int main()
{
	int xo=0;
	int a[]={1,2,3,4,5,4,3,2,1,8};
	int size=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<size;i++)
		xo=xo^a[i];
	int pos=0;
	for(int i=0;i<32;i++)
		if(xo & (1<<i)>0)
		{
			pos=i;
			break;
		}
	int num1=0,num2=0;
	for(int i=0;i<size;i++)
	{
		if(a[i]&(1<<pos)>0)
		{
			num1=num1^a[i];
		}
		else
		{
			num2=num2^a[i];
		}
	}
	cout<<num1<<" "<<num2;
}
