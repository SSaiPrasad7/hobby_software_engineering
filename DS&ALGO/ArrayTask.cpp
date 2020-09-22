#include<bits/stdc++.h>
using namespace std;
main()
{
	int a[20],n,x,position,element;
	cout<<"Enter the no.of elements"<<endl;
	cin>>n;

	while(1)
	{
	cout<<"select"<<endl;
	cin>>x;
	switch(x)
	{
	
	case 1:
		cout<<"Enter the elements"<<endl;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		break;
		
	case 2:
		cout<<"The values are"<<endl; 
		for(int j=0;j<n;j++)
		{
			cout<<a[j]<<endl;
		}
		break;
	
	case 3:
		cout<<"Enter the postion to insert the value"<<endl;
		cin>>position;
		cout<<"Enter the element"<<endl;
		cin>>element;
		n++;
		for(int i=n;i>position;i--)
		a[i]=a[i-1];
		
		a[position-1]=element;
		break;	
		
	case 4:
		cout<<"Enter the postion to update the value"<<endl;
		cin>>position;
		cout<<"Enter the element"<<endl;
		cin>>element;
		a[position-1]=element;
		break;
		
	case 5:
		cout<<"Enter the postion to delete the value"<<endl;
		cin>>position;
		if(position>=n+1)
		cout<<"Deletion is not possible"<<endl;
		else
		for(int i=position-1;i<n-1;i++)
		a[i]=a[i+1];
		break; 
		
	case 6:
		cout<<"Enter the element"<<endl;
		cin>>element;
		cout<<"Searching..."<<endl;
		for(int j=0;j<n;j++)
		if(a[j]==element)
		cout<<"Position of the element "<<j<<" and Element is "<<a[j]<<endl;
		break;

}
}
}
