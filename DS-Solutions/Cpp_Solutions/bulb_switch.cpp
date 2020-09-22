#include<bits/stdc++.h>
using namespace std;
#define flip(a) (a==0?1:0)

int main()
{
	int bulbs[]={0,1,0,1};
	int size=*(&bulbs+1)-bulbs;
	int sum=0;
	int count=0;
	for(int i=0;i<size;i++)
		sum+=bulbs[i];
	if (sum==size)
		cout<<0;
	else
	{
		for(int i=0;i<size;i++)
		{
			if(bulbs[i]==0)
			{
				for(int j=i;j<size;j++)
					bulbs[j]=flip(bulbs[j]);
				count+=1;
			}
			else 
				continue;			
		}
		cout<<count<<endl;
	}	
}
