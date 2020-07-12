#include<iostream>
#include<cstddef>
#include<string>
using namespace std;

int main(int argc,char *argv[])
{
	string str;

	for(size_t  i=1;i!=argc;++i)
	{
		str+=argv[i];
	}


	cout<<str<<endl;

	return 0;
}
