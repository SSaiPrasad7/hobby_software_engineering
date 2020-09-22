#include<iostream>
using namespace std;
/*int* swap(int a,int b)
 {
 	int temp=a;
 	a=b;
 	b=temp;
 	int l[2]={a,b};
 	return l;
 }*/
 int* reverse(int* list,int length)
 {
 	int temp;
 	for(int i=0,j=length-1;i<j;i++,j--)
 	{
 		temp=list[i];
 		list[i]=list[j];
 		list[j]=temp;
 		
	}
	return list;	
 }
 void print(int* list,int length)
 {
 	for(int i=0;i<length;i++)
 	{
 	cout<<*(list+i)<<" ";
 		
	}
 	
 }
int main()
{
 /*typedef int a;
 a s[4]={5,67,876,6};
int* f=s;
 for(int i=0;i<4;i++)
 {
 	cout<<"asd  "<<*(s+i)<<endl;
 	cout<<"asd1   "<<s[i]<<endl;
 	cout<<"asd2 "<<*(f+i)<<endl;
 	cout<<"asd3   "<<f[i]<<endl;
 }*/
 /*int* p=swap(2,3);
cout<<*(p+1)<<endl;*/
int s[]={1,2,3,4};
int *p=reverse(s,4);
print(s,4);
	
}
