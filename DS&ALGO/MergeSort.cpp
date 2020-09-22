#include<iostream>
using namespace std;
void merge(int* arr,int left,int mid,int right)
{
	int nl=mid-left+1;
	int nr=right-mid;
	int b1[nl],b2[nr];
	
	for(int i=0;i<nl;i++)
		b1[i]=arr[left+i];
	for(int j=0;j<nr;j++)
		b2[j]=arr[mid+1+j];
	
	int i=0, j=0, k=left;
	while(i<nl && j<nr)
	{
		if(b1[i]<=b2[j])
		{
			arr[k]=b1[i];
			i++;
		}
		else
		{
			arr[k]=b2[j];
			j++;
		}
		k++;
	}
	while(i<nl)
	{
		arr[k]=b1[i];
		k++;
		i++;
	}
	while(j<nr)
	{
		arr[k]=b2[j];
		k++;
		j++;
	}
}
void mergesort(int arr[],int left,int right)
{
	if(left<right)
	{
		int mid=left+(right-left)/2;
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		merge(arr,left,mid,right);
	}
}
void printArray(int arr[],int n) 
{ 
    for (int i = 0; i <n; i++) 
		cout<<arr[i]<<" ";
	cout<<endl; 
} 

int main()
{
	int arr[]={9,2,4,1,6,8,5,3};
	int n= *(&arr + 1) - arr;
	printArray(arr,n);
	mergesort(arr,0,n-1);
	//cout<<"Sorted Array:"<<endl;
	printArray(arr,n);	
}
