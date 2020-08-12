#include<forward_list>
#include<iostream>
#include<string>
using namespace std;

forward_list<string>::iterator setForward_List(forward_list<string> & r,const string & s1,const string& s2)
{
	auto befr=r.before_begin();
	for(auto be=r.begin();be!=r.end();++be)
	{
		if(*be==s1){	r.insert_after(be,s2);return ++be;}
		befr=be;
		
	}
	auto end=r.end();
	return r.insert_after(befr,s2);
	
}
int main(void)
{
	forward_list<string> p{"123","124","abc","ddd"};
	cout<<"\033[1;31m...\033[0m"<<endl;
	for(auto & a:p)
		cout<<a<<" ";
	cout<<endl;

	setForward_List(p,"adsf","aaa");
	
	for(auto & a:p)
		cout<<a<<" ";
	cout<<endl;

	return 0;
}
