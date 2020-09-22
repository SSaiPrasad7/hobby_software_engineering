#include<bits/stdc++.h>
using namespace std;
int main()
{
	int swap=0;
	int a[]={23,3,28,2,7};
	int size=sizeof a/sizeof a[0];
	int i,temp,j,min=0;
	for(i=0;i<size;i++)
	{
		min=i;
		for(j=i+1;j<size;j++)
			if(a[min]>a[j])
				min=j;
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	cout<<swap<<"\n";
	for(i=0;i<size;i++)
		cout<<*(a+i)<<" ";
}
