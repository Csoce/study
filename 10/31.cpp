#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>

using namespace std;


int main(void)
{
	istream_iterator<int> item_er(cin),ieof;
	vector<int> vec;
	copy(item_er,ieof,back_inserter(vec));

	sort(vec.begin(),vec.end(),[](const int & a,const int & b){return a<b;});
	copy(vec.begin(),vec.end(),ostream_iterator<int>(cout," "));cout<<endl;

	auto nunique=unique(vec.begin(),vec.end());
	vec.erase(nunique,vec.end());
	
	copy(vec.begin(),vec.end(),ostream_iterator<int>(cout," "));cout<<endl;
	return 0;
}
