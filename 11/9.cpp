#include<iostream>
#include<list>
#include<map>

using namespace std;

int main(void)
{
	map<string,list<int>> nmap;
	string p;
	while(cin>>p)
	{
		nmap[p];
		nmap[p].push_back(1);	
	}
	return 0;
}
