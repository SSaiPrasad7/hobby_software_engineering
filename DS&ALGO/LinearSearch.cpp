#include<iostream>
using namespace std;
main()
{
	int a[100],n,i,key;
	cout<<"Enter the no of elements"<<endl;
	cin>>n; 
	cout<<"Enter "<<n<<" elements"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"Enter the key value to be searched"<<endl;
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			cout<<"Element "<<a[i]<<" found at "<<i+1<<endl;
			break;
		}
		else 
		{
			cout<<"'Not Found";
		}
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
		
}
