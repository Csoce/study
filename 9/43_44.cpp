#include<iostream>
#include<string>
using namespace std;

string reaseInset(string & s,const string & oldval,const string & newval)
{
	string::iterator be=s.begin();
	while(be!=s.end()-oldval.size())
	{
		if(string(be,be+oldval.size()) == oldval)
		{

			//s.insert(s.erase(be,be+oldval.size()),newval.begin(),newval.end());
			s.replace(be,be+oldval.size(),newval.begin(),newval.end());
			be+=newval.size();
		}
		else
		{
			++be;
		}
	}	
	return s;
}
int main(void)
{
	string s("hello do you like for hello the is !");
	cout<<s<<endl;

	cout<<reaseInset(s,"hello","HELLO")<<endl;

	return 0;
}
