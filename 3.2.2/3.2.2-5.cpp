#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	
	string str1,str2;
	cout<<"please input string to str1:";
	getline(cin,str1);
	cout<<"please input string to str2:";
	getline(cin,str2);
	
	cout<<str1+str2<<endl;
	cout<<str1+' ' +str2<<endl;
	return 0; 
}
