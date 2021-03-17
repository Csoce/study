#include<iostream>
#include<vector>
#include<list>
#include<string>
using namespace std;

	template<typename T,typename U>
int finda(T &t,const U &u)
{
	for(auto i=t.begin();i!=t.end();++i)
	{
		if(*i==u)
			return i-t.begin();
		return 0;
	}
}
int main(void)
{
	vector<int> p;
	for(auto i=0;i<10;++i)
		p.push_back(i);

	int Q;
	cin>>Q;
	
	cout<<finda(p,Q)<<endl;
	return 0;
}
