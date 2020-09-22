#include<cstring>
#include<cstdio>
using namespace std;

void mystrlen(char *str){
	int count = 0;
	int i = 0;
	while(*(str+i) != '\0'){
		count++;
		i++;
	}
	
	printf("%d   %d", count, strlen(str));
}

int main(){
	char str[] = "Loevely Professional";
	printf("%p  \n%p",str,&str[0]);
	mystrlen(str);
}
