#include<iostream>
using namespace std;
main()
{
	int a[100],n,i,j,key,low,high,mid,temp;
	cout<<"Enter the no of elements"<<endl;
	cin>>n; 
	cout<<"Enter "<<n<<" elements"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the key value to be searched"<<endl;
	cin>>key;
	//Bubble Sort
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	//Binary Search
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==key)
		{
			cout<<"Element "<<key<<" found at "<<mid+1<<endl;
			break;
		}
		else if(key>a[mid]) 
			low=mid+1;
		else if(key<a[mid]) 
			high=mid-1;
	}
}
