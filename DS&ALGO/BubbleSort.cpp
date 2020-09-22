#include <bits/stdc++.h> 
using namespace std;
main()
{
	int b;
	vector<int>V;
	//vector<int> vect{ 10, 20, 30 }; 
	printf("Enter the values:");
	for(int k;k<5;k++)
	{
		scanf("%d",&b);
		V.push_back(b);
	}
    sort(V.begin(), V.end());

	int a[]={3,3,8,9,7};
	int size=sizeof a/sizeof a[0];
	int i,temp,j,swap=0;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-i-1;j++)
		{	
			if (a[j]>a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
				swap++;
			}
	 }
	}
	cout<<swap<<"\n";
	for(i=0;i<size;i++)
	{
		cout<<*(a+i)<<" ";
		//cout<<V[i]<<" ";
	}
}
