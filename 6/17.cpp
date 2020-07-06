#include<iostream>
#include<cctype>
#include<string>
#include"17.h"

using std::string;
using std::endl;
using std::cin;
using std::cout;

bool is_upperBystr(const string &str)
{
	for(const auto & x:str)
	{
		if(isupper(x))
			return true;	
	}
	return false;
	
}
bool  to_lowerBystr(string & str)
{
	for(auto &x:str)
	{
		x=tolower(x);
	}	
	return true;
}

int main(void)
{
	string str;
	cin>>str;
	cout<<"is string in Upper: "<<is_upperBystr(str)<<" "<<str<<endl;
	cout<<"string to lower :"<<to_lowerBystr(str)<<" "<<str<<endl;

	
	return 0 ;
}


