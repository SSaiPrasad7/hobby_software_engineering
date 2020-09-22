/*
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
*/
#include<bits/stdc++.h>
#define max(x,y) (x>y?x:y)
#define min(x,y) (x<y?x:y)
using namespace std;

int main()
{
	int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
	int size=*(&arr+1)-arr;
	int water=0;
	int left_max[size],right_max[size];
	left_max[0]=arr[0];
	for(int i=1;i<size-1;i++)
		left_max[i]=max(left_max[i-1],arr[i]);
	right_max[0]=arr[size-1];
	for(int i=size-2;i>=0;i--)
		right_max[i]=max(right_max[i+1],arr[i]);
	for(int i=0;i<size;i++)
	{
		int s=(min(left_max[i],right_max[i]))-arr[i];
		if(s>=0)
			water+=s;
	}
	
	cout<<water;
}
