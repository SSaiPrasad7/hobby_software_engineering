/*TWISTED MATRIX
A matrix of same rows and same columns is given .Sakshi wants to Sort the matrix in such manner  that she will start from the first element and traverse the 
matrix in clockwise manner at the end she should be at  the middle position with a largest element .Find the solution of Sakshi's problem.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[3][3]={{2,5,12},{22,45,55},{1,6,8}};
	int b[3*3];
	int x=0;
	//2D TO 1D CONVERSION
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			b[x]=a[i][j];
			x++;
		}
	}

//BUBBLE SORT OF 1-D ARRAY
	int temp;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;				
			}
		}
	}
//Spiral ASSIGNMENT 	
	int T=0,L=0;
	int B=2,R=2;
	int dir=0;
	x=0;
	while(L<=R && T<=B && x<9)
	{
		if(dir==0)
		{
			for(int i=L;i<=R;i++)
			{
				a[T][i]=b[x];
				x++;
			}
				
			T++;
		}
		else if(dir==1)
		{
			for(int i=T;i<=B;i++)
			{
				a[i][R]=b[x];
				x++;
			}
				
			R--;
			
		}
		else if(dir==2)
		{
			for(int i=R;i>=L;i--)
			{
				a[B][i]=b[x];
				x++;
			}
				
			B--;	
		}
		else if(dir==3)
		{
			for(int i=B;i>=T;i--)
			{
				a[i][L]=b[x];
				x++;
			}
			L++;
		}
		dir=(dir+1)%4;	
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
