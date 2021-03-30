#include<iostream>
#include<regex>
#include<string>
using namespace std;

int main(void)
{
	//regex r("[[:alpha:]]*(ie|ci)[[:alpha:]]*",regex::icase);
	regex r("[^c]ei",regex::icase);
	smatch	 results;
	string re;
	while(cin>>re)
	{
		if(regex_search(re,results,r)	)	
			cout<<results.str()<<"your word yes"<<endl;
		else
			cout<<"your word no "<< endl;
		cout<<"----------"<<endl;

	}
	return 0;
}
