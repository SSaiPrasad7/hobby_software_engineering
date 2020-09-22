#include<stdio.h>
int len(char *s)
{
	if(*s=='\0')
	{
		return 0;
	}
	else 
	return s+len(s+1);
}

int main()
{
	int a[3]={1,2,3};
	int length=len(a);
	printf("%d",length);

}
