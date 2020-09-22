/*string in C++*/

/*
string class
*/

#include<iostream>
using namespace std;

//string(string ref);

int main(){
	string str1 ("Lovely");//one argument constructor
	string str2(str1);//one argiment construct of accpting same type
	string str3(str1, 0,4);//3 argument constructor
	cout<<str3;
	string str4 = str3;//it will call the copy constructor of string class
	
	string str5(10,'X');//XXXXXXXXXX
	
	string str6(5,90);//ZZZZZ
	
	string str7(str1.rbegin(),str1.rend());
	cout<<endl<<str7;
}

