#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5,4,3,2,1,8};
	int size=*(&a+1)-a;
	bool b[size];
	memset(b,false,sizeof(b));
	for(int i=0;i<size;i++)
	{
		if(b[i]==true)
			continue;
		int count=1;
		for(int j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count+=1;
				b[j]=true;
			}		
		}
		cout<<a[i]<<" occured "<<count<<"times."<<endl;
	}
	
}
