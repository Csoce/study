#include<iostream>
#include<string>
#include<regex>
using namespace std;

int main(void)
{
	string r1("(\\d{5})([-])?(\\d{4})?");
	regex r(r1);
	smatch results;
	
	string s;

	while(getline(cin,s))
	{
		for(sregex_iterator it(s.begin(),s.end(),r),end_it;
				it!=end_it;++it)
		{
			if((*it)[2].matched && (*it)[3].matched)
				cout<<"yes ";
			else if((*it)[1].matched && !(*it)[2].matched)
				cout<<"yes ";
			else	
				cout<<"no ";
			cout<<it->str()<<endl;
		}

		cout<<"----------"<<endl;
	}
	return 0;
}
