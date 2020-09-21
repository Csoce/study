#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(void)
{
	map<int,vector<int>> nmap;
	nmap[1].push_back(1);
	nmap[1].push_back(2);
	nmap[1].push_back(3);
	
	for(const auto & a:nmap)
	{
		for(const auto & b: a.second)
			cout<<a.first<<"--> "<<b<<endl;
	}
	
	cout<<"\033[1;31m--------\033[0m"<<endl;
	auto p=nmap.begin();
	(p->second)[2]=10;
	
	for(const auto & a:nmap)
	{
		for(const auto & b: a.second)
			cout<<a.first<<"--> "<<b<<endl;
	}
	return 0;
}
