/*
Strings in C/C++
 C- Style string
 String Class
*/

#include<cstring>
#include<cstdio>
using namespace std;

int main(){
	char str1[] = {'H','E','L','L','O','\0'};
	/*
	At first the r-value (Hello) will be stored in temporary menory block. Read only
	Compiler will evalute the rvalue
	The result of the rvalue will copied to the memory block of str2
	*/
	
	char str2[] = "Hello";//buffer
	
	/*string literals are constants in nature*/
	char *str3 = "Hello";//address of memory block which stores H only is assigned yo str3
	//str3[2] = 'Q';
	
	/*char ch;//1 byte
	char str[10];//buffer of size 10 byte, 10 blocks of 1 byte each
	
	int k;//4byte one block only
	int *ptr = &var;
	*/
	int len = strlen(str1);
	printf("%d\n", len);
	
	printf("%d\n",strlen(str3));
	
	//str3[2] = 'L';
	
	const int k = 90;
	
	
	int a = 90;//a copy operation
	
	str2[3] = 'L';
	
	printf("%s",str3);
	
}
