#include<bits/stdc++.h>
using namespace std;
int main()
{
	//5,10,25,100,200
	int denominations[]={4,17,29};
	int size=*(&denominations+1)-denominations;//size of list
	int values[size];
	int sum=0;
	int targetMoney;
	cout<<"Enter the Money: "<<endl;
	cin>>targetMoney;//75=29+29+17
	int amount=targetMoney;
	
	for(int i=size-1;i>=0;i--)
	{
		if(targetMoney>=denominations[i])
		{
			values[i]=targetMoney/denominations[i];
			targetMoney=targetMoney%denominations[i];
		}
		else
		{
			values[i]=0;
		}
	}
	for(int j=0;j<size;j++)
	{
		sum+=denominations[j]*values[j];
	}

	string output=(amount==sum)?"true":"false";
	cout<<output;
	//cout<<values[0]<<values[1]<<values[2];

}
