b #include<bits\stdc++.h>
using namespace std;
int main()
{
	int a[4][5]={{10,20,30,40,50},{15,25,35,45,55},{17,26,37,46,56},{27,40,58,60,71}};
	int rows=sizeof a/sizeof a[0];
	int cols=sizeof a[0]/sizeof a[0][0];
	cout<<rows<<" "<<cols<<endl;
	int i=0,j=cols-1;
	int key;
	cout<<"Enter the key to be searched: ";
	cin>>key;
	while(i<rows-1 && j>=0)
	{
		if(a[i][j]==key)
		{
			cout<<"("<<i+1<<","<<j+1<<")";
			break;
		}
		else if(key>a[i][j])
		{
			i++;
		}
		else if(key<a[i][j])
		{
			j--;
		}
	}
}
