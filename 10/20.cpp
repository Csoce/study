#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

void ReturnStrCount(const vector<string> & str,unsigned size_type)
{
	
	auto num=	count_if(str.begin(),str.end(),
		[size_type](const string &s)
		{
			return s.size()>=size_type;
		}
		);
	cout<<num<<endl;
}



int main(void)
{
	vector<string> str{"reslt","cheng","long","mr.cachat"};
	ReturnStrCount(str,5);
	return 0;
}
