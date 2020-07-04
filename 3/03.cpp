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
	
	if(str1>str2)
	{	
		cout<<"max string in:"<<str1<<endl;
	}
	else 
	{
		
		cout<<"max string in:"<<str2<<endl;
	}

	
	
	return 0;	
}
