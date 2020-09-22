#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;	
};
node* create()
{
	node *p;
	p=(node *)malloc(sizeof(node));
	int x;
	cout<<"Enter the data"<<endl;
	cin>>x;
	if(x==-1)
	{
		return NULL;
	}
	else
	{
		p->data=x;
		p->left=create();
		p->right=create();
	
	}
		return p;
}
void preorder(node* r)
{
	if(r!=NULL)
{
	cout<<r->data<<endl;
	preorder(r->left);
	preorder(r->right);
}
}
main()
{
	node *root;
	root=create();
	preorder(root);
}
