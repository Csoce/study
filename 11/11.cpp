#include<iostream>
#include<map>
#include<string>
#include<utility>

using namespace std;



int main(void)
{
	map<string,int> nmap;
	string p;
	while(cin>>p)
	{
		nmap.insert(make_pair(p,1));
	}

	for(const auto & a: nmap)
		cout<<a.first<<" "
		<<a.second<<" "<<endl;
	return 0;
}
