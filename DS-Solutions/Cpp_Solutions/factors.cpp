#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n=872;
//int x=sqrt(n);
for(int i=1;i*i<=n;i++)
{
	if(n%i==0)
		cout<<i<<" "<<n/i<<endl;
}
}

/*for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
			cout<<i<<" ";
	}
	cout<<n;
}*/
