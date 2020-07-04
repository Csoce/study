#include<iostream>
#include<cctype>
#include<vector>

using namespace std;

int main(void)
{
	vector<string> str;	
	string temp;
	int i=0;
	while(i<10&&cin>>temp)
	{	
		str.push_back(temp);
		i++;
	}
	for(auto &x:str)
	{
		for(auto &t:x)
		{
			t=toupper(t);
		}
		cout<<x<<endl;
	}
	return 0 ;
}
