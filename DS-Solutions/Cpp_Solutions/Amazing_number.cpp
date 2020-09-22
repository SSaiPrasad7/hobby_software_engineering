#include <iostream>
using namespace std;
bool is_prime(int n)
{   //Time complexity:O(n sqrt(n))
	if(n<2)
		return false;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}
bool is_amazing(int n)
{
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			bool n1=is_prime(i);
			bool n2=is_prime(n/i);
			if (n1 && n2)
				return true;
		}		
	}
	return false;
}
int main()
{
int n;
cout<<"Enter the Number: "<<endl;
cin>>n;
bool ans=is_amazing(n);
cout<<ans<<endl;
}
