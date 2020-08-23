#include<string>
#include<iostream>
using namespace std;

string &  StEdName(string &s,const string & re,const string &ed)
{
	s.insert(s.begin(),re.begin(),re.end());
//	s.append(ed);
	s.insert(s.end(),ed.begin(),ed.end());
	return s;
}
int main(void)
{
	string p("cheng");

	cout<<p<<endl;

	StEdName(p,"jb ","YES ");
	cout<<p<<endl;
	
	return 0;
}
