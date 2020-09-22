#include<bits/stdc++.h>
using namespace std;
main(){
char str[6]="apple";
stack<char> s;
for(int i=-1;i<5;i++)
{
	s.push(str[i]);
}
while(!s.empty())
{
	cout<<s.top();
	s.pop();
}
int a[]={5,0,25,12,35,2,3,4,100};
	stack<int> s;
	s.push(a[0]);
	for(int i=0;i<9;i++)
	{
	
		while(s.empty() == false && s.top()<a[i])
		{
			cout<<s.top()<<" "<<a[i]<<endl;
			s.pop();
			s.push(a[i]);
		}
	}
	while(!s.empty())
	{
		cout<<s.top()<<"-1";s.pop();
	}
}

