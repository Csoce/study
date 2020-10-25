#include<iostream>
#include<string>
#include<new>
using namespace std;

int main(void)
{
	string s1="abcdefg";
	string s2="_qwert";
	string sln=s1+s2;
	char * p= new char[sln.size()];

	for(size_t i=0;i!=sln.size();++i)
	{
		*(p+i)=sln[i];
	}

	for(size_t i=0;i!=sln.size();++i)
	{
		cout<<*(p+i);
	}

	delete[] p;
	return 0;
}
