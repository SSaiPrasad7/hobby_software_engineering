#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* next;
};
void create(struct node* head,int d)
{
	node * new_node;
    new_node = (node *) malloc(sizeof(node));
    new_node->data = d;
    new_node->next = *head;
    *head = new_node;
}
int main()
{
	struct node* a;
	a=(node*)malloc(sizeof(node*));
	a=NULL;
	create(a,10);
	create(a,20);
	while(1){
		if(a==NULL) break;
		cout<<a->data;
		a=a->next;
	}
}
