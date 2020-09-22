#include<stdio.h>
main()
{
	int a[2][3]={{1,2,3},{4,5,6}};
	int (*p)[3]=a;
	printf("%u %u %u %u\n",&a[0],a[0],*a,a);
	printf("%u %u %u %u\n",&a[1],a[1],*(a+1),a+1);
	printf("%u %u \n",*(*(a+1)+2),*(*a+2));
	int b[]={1,2,3};
	for(int i=0;i<3;i++)
	printf("%d",i[b]);
}
/*
a[i][j]=*(a[i]+j)=*(*(a+i)+j)
*/
