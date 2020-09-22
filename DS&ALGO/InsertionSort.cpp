#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={3,3,8,9,7};
	int size=sizeof a/sizeof a[0];
	int i,temp,j,swap=0;
	for(i=1;i<size;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			swap++;
			j--;
		}
		a[j+1]=temp;
	}
	cout<<swap<<"\n";
	for(i=0;i<size;i++)
		cout<<*(a+i)<<" ";
}
