#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
	ifstream in("10.txt");
	vector<string> vstr;
	if(in)
	{
		string str;
		while(getline(in,str))
		{
			vstr.push_back(str);
		}

	}	
	
	for( auto i=vstr.begin();i!=vstr.end();++i)
	{
		istringstream srem(*i);
		string pstr;	
		while(srem>>pstr)
		{
			cout<<pstr<<endl;
		}		

	}
	return 0;
}
