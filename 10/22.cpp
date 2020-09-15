#include<iostream>
#include<functional>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;
using namespace std::placeholders;

bool isMaxCounter(const string & s1,string::size_type  n)
{
	return s1.size()>=n;
}


void isCounter(const vector<string> & s,string::size_type n)
{
//	auto i=		count_if(s.begin(),s.end(),
//	[n](const string& s){return s.size()>=n;}
//		);

	auto i=count_if(s.begin(),s.end(),
		bind(isMaxCounter,_1,n)
	);	
	cout<<"iscount equal:"<<i<<endl;	
	
}
int main(void)
{
	vector<string> str{"chengjinbo","kuangquanshui","wangda","facki"};

	isCounter(str,6);
	
	return 0;
}
