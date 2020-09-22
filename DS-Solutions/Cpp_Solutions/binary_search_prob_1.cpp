/*Find the element that appears once in an array where every other element appears twice*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={0,0,2,2,5,5,6,9,9};
	int size=*(&arr+1)-arr;
	int low=0;
	int high=size-1;
	int mid;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(mid>0 and arr[mid-1]==arr[mid])
			mid--;
		if(mid<size-1 and arr[mid+1]!=arr[mid])
			break;
			
		if(mid%2==0)
			low=mid+1;
		else
			high=mid-1;
		
	}
	cout<<arr[mid];
}
