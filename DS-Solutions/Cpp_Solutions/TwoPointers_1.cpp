//Given an array arr[] and an integer n, the task is to find the number of pairs of integers in the array whose sum is equal to n.
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={1,5,5,5,6,6,11};
	int size=sizeof arr/sizeof arr[0];
	int x=0,y=size-1;
	int n=10;
	int ans=0;
	while(x<y)
	{
		if(arr[x]+arr[y]<n)
		{
			x++;
		}
		else if(arr[x]+arr[y]>n)
		{
			y--;
		}
		else
		{
			int value1=arr[x],initial_pos1=x;
			while(x<y and arr[x]==value1)
				x++;
			int value2=arr[y],initial_pos2=y;
			while(y>=x and arr[y]==value2)
				y--;
			if(value1==value2)                      
			{
				int temp=x-initial_pos1+initial_pos2-y;
				ans+=(temp*(temp-1))/2;            
			}
			else
			{
				ans+=(x-initial_pos1)*(initial_pos2-y);
			}
		}
	}
	cout<<ans;
}
