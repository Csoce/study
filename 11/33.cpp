#include<iostream>
#include<sstream>
#include<fstream>
#include<map>
#include<string>

using namespace std;


map<string,string> buildMap(ifstream & in)
{
	map<string,string> nmap;
	string str1,str2;
	while(in>>str1)
	{
		getline(in,str2);
		if(str2.size()>0)
		{
			nmap[str1]=str2.substr(1);
		}
		else
		{
			throw runtime_error("no rule for"+str1);
		}
	}
	return nmap;


}
const string & foundString(string& p,const map<string,string>& nmap)
{
	auto ivr=nmap.find(p);	
	if(ivr==nmap.end())
		return p;
	else
		return ivr->second;
}
void  trankformInput( ifstream & mapin, ifstream & in)
{

	auto transmap=buildMap(mapin);

	//	for(const auto & a :transmap)
	//		cout<<a.first<<" "<<a.second<<endl;

	string str1;
	while(in>>str1)
	{
		auto a=foundString(str1,transmap);
		if(a.size()>1)
			cout<<a<<" ";	
		else
			cout<<str1<<endl;
	}	


}

int main(void)
{
	ifstream mapin("33_transfrom.txt"),in("33_input.txt");	
	string s;
	while(in>>s)
		cout<<s<<" ";cout<<endl;

	in.close();
	in.open("33_input.txt");

	trankformInput(mapin,in);
	return 0;
}
