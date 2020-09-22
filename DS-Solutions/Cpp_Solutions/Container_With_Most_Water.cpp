/*
Container With Most Water
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the 
two endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together with x-axis forms a container, such that the container contains
the most water.
Note: You may not slant the container and n is at least 2.
*/
//Two Pointers-Time Complexity-O(N)
#include<bits/stdc++.h>
using namespace std;
#define max(a,b)(a>b?a:b)
#define min(a,b)(a<b?a:b)
int main()
{
	int arr[]={1,8,6,2,5,4,8,3,7};
	int size=sizeof arr/sizeof arr[0];
	int start=0,end=size-1;
	int area=0;
	while(start<end)
	{
		area=max(area,(min(arr[start],arr[end])*(end-start)));
		if(arr[start]<arr[end])
			start++;
		else 
			end--;
	}
	cout<<area;
	
}
