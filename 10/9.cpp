#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>

using namespace std;

void elimDups(vector<string> & s)
{
	sort(s.begin(),s.end());
	for(const auto & a:s)
		cout<<a<<" ";
	cout<<endl;

	auto end_unique=unique(s.begin(),s.end());
	for(const auto & a:s)
		cout<<a<<" ";
	cout<<endl;

	s.erase(end_unique,s.end());
	for(const auto & a:s)
		cout<<a<<" ";
	cout<<endl;
}

int main(void)
{
	vector<string> str;
	string s;
	while(cin>>s)
		str.push_back(s);	
	elimDups(str);
	return 0;
}
