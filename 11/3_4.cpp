#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;

int main(void)
{
	map<string,size_t> smap;
	set<string> Nex{"cheng","the","to"};
	string p;	
	while(cin>>p)
		if(Nex.find(p)==Nex.end())	
			++smap[p];

	for(const auto& a:smap)
		cout<<a.first<<" words "<<a.second
			<<((a.second>1)?" times ":" time ")<<endl;

	return 0;
}
