#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main(void)
{
	string pattern("[^c]ei");
	pattern="[[:alpha:]]*"+ pattern + "[[:alpha:]]*";

	regex r(pattern,regex::icase);

	smatch results;
	string test_str="receipt freind theif receive";

	for(sregex_iterator it(test_str.begin(),test_str.end(),r),end_it;
			it!=end_it;++it)
			cout<<(*it).str()<<endl;
	return 0;
}
