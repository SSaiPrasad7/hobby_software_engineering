#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,2,3},{8,9,4},{7,6,5}};
	int size=sizeof(a[0])/sizeof(a[0][0]);
	for(int i=0;i<size;i++)
	{	for(int j=0;j<size;j++)
			cout<<a[i][j]<<" ";
		cout<<"\n";
	}
	
	int T=0,L=0;
	int B=size-1,R=size-1;
	int dir=0;
	while(T<=B && L<=R)
	{
		if(dir==0)
		{
		for(int i=L;i<=R;i++)
			printf("%d ",*(*(a+T)+i));
		T++;
		}
		else if(dir==1)
		{
		for(int i=T;i<=B;i++)
			printf("%d ",*(*(a+i)+R));
		R--;
		}
		else if(dir==2)
		{
		for(int i=R;i>=L;i--)
			printf("%d ",*(*(a+B)+i));
		B--;
		}
		else if(dir==3)
		{
		for(int i=B;i>=T;i--)
			printf("%d ",*(*(a+i)+L));
		L++;
		}
		dir=(dir+1)%4;		
	}

}
