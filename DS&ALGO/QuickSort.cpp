#include<iostream>
using namespace std;
int partition(int* arr, int start,int end)
{
	int pivot=arr[end];
	int partition_index=start;
	for(int i=start;i<end;i++)
	{
		if(arr[i]<=pivot)
		{
			swap(arr[partition_index],arr[i]);
			partition_index++;
		}
	}
	swap(arr[partition_index],arr[end]);
	return partition_index;
}
void quicksort(int* arr,int start,int end)
{
	if(start<end)
	{
	int p_index=partition(arr,start,end);
	quicksort(arr,start,p_index-1);
	quicksort(arr,p_index+1,end);
 }
}
int main()
{
	int arr[]={4,67,34,23,13,0,3};
	int size=sizeof arr/sizeof arr[0];
	quicksort(arr,0,size-1);
	for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
}





