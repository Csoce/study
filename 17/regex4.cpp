#include<iostream>
#include<regex>
#include<string>

using namespace std ;


int main(void)
{
	string sp1("(\\()?(\\d{5})([\\-\\)])?(\\d{4})");
	regex r(sp1);
	string s;
	string fmt="$2.$4";
	while(cin>>s)
	{

		cout<<regex_replace(s,r,fmt,std::regex_constants::format_no_copy)<<endl;		

	}	
	return 0;
}
