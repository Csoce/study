#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(void)
{
	multimap<string,string> nmap{{"cheng","horse"},
					{"cheng","house"},
					{"fang","young"},
					{"cheng","cm"},
					{"word","dadada"}
					};

	
	for(const auto & a : nmap)
		cout<<a.first<<"-- "<<a.second<<endl;

	cout<<"-------------------------------"<<endl;
	auto n=nmap.count("cheng");
	while(n)
	{
		nmap.erase(nmap.find("cheng"));
		--n;
	}
	
	for(const auto & a : nmap)
		cout<<a.first<<"-- "<<a.second<<endl;

	return 0;
}
