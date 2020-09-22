/*
Finding the first and last occurence of an element which 
has same element multiple times in an array.Array is sorted 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={0,1,2,2,2,2,3,4,9};
	int size=*(&arr+1)-arr;
	int low=0;
	int high=size-1;
	int mid;
	int key=2;
	int last_occurence=1;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(arr[mid]==key && (mid==0 || arr[mid-1]!=arr[mid]))
			break;
		//if(arr[mid]==key and (mid==size-1 or arr[mid+1]!=arr[mid]))
			//break;
		if(key>arr[mid])
			low=mid+1;
		else
			high=mid-1;	
	}
	int first_occurence=mid;
	for(int i=mid;arr[i]==key;i++)
	{
		last_occurence++;
	}
	int freq=last_occurence-first_occurence+1;
	cout<<"Frequency of "<<key<<"="<<freq;
}
