#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

int main(void)
{
	multimap<string,vector<string>> nmap;
	string str1,str2;	
	vector<string> ivec;	

	cout<<"please input first_name:";
	while(cin>>str1)
	{
		cout<<"please input second_name:";
		while(cin>>str2)	
		{
			ivec.push_back(str2);
			cout<<"please input second_name:";
		}

		nmap.insert({str1,ivec});
		ivec.clear();
		cin.clear();
		cout<<endl<<"please input first_name:";
	}

	for(const auto & a:nmap)
		for(const auto & b:a.second)
		{
			cout<<a.first<<"------------- "
				<<b<<endl;
		}	

	return 0;

}
