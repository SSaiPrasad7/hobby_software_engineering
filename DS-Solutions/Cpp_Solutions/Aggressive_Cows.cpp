#include<bits/stdc++.h>
using namespace std;
#define max(a,b) (a>b?a:b)
int main()
{
	int location[]={1,2,4,8,9};
	int n=*(&location+1)-location;
	int cows=3;
	int low=0;
	int high=location[n-1];
	int largest_working_guess=-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		int count=1,left=0;
		for(int i=1;i<n &&count<cows;i++)
		{
			if(location[i]-location[left]>=mid)
			{
				left=i;
				count++;
			}
		}
		if(count>=cows)
		{
			largest_working_guess=max(mid,largest_working_guess);
			low=mid+1;
			cout<<"low"<<mid<<endl;
		}
		else
		{
			high=mid-1;
			cout<<"high"<<mid<<endl;
		}
	}
	cout<<largest_working_guess;
	
}
