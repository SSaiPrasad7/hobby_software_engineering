 #include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
	int x=sqrt(n);    //Time complexity:O(n sqrt(n))
	if(n<2)
		return false;
	for(int i=2;i<=x;i++)
		if(n%i==0)
			return false;
	return true;
}
/*bool is_prime(int n)
{
	int count=0;
	if(n<1)
		return false;
	for(int i=1;i<=n;i++)
		if(n%i==0)
			count++;
	return count==2;
}*/
/*
int main()
{
	int n;
	cin>>n;
	int count_num=0;
	for(int i=1;i<=n;i++)
	{
		if(is_prime(i))    
		{
			count_num++;
			cout<<i<<" ";
		}
   }
   cout<<endl<<count_num<<" ";
}*/
/*sieve Algorithm*/
//Time complexity-O(nlog(log n))
int main()
{
	int n;
	cin>>n;
	bool prime[n+1];
	memset(prime, true, sizeof(prime));
	prime[0]=false;
	prime[1]=false;
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==true)
		{
			for(int j=i;j*i<=n;j++)
				prime[j*i]=false;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(prime[i])
			cout<<i<<" ";
	}
}


