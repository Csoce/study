#include<iostream>
#include<string>

#include<vector>
#include<list>
using namespace std;



template <typename T,typename U>
int  fia(T &t,const U &u)
{
	for(auto a=t.begin();a!=t.end();++a)
	{
		cout<<"*a"<<*a <<" "<<u<<endl;
		if(*a==u) return a-t.begin();
		else if(a==t.end()) return -1;
	}
} 
int main(void)
{
	vector<string> q;
	for(int i=0;i<10;++i)
	{ 	q.push_back(to_string(i));cout<<i<<endl ;}
	
	cout<<"-------------"	<<endl;
	string q1;
	cin>>q1;
	cout<<fia(q,q1)<<endl;
	return 0;
}
