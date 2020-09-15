#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s,string::size_type sz)
{
	return s.size()>=sz;
}
void biggies(vector<string> &words,
		vector<string>::size_type sz)
{
	//排序
	sort(words.begin(),words.end());
	for_each(words.begin(),words.end(),[](const string & s){cout<<s<<" ";}); cout<<endl;
	//重排使重复的单词仅出现在靠前部位
	auto end_unique=unique(words.begin(),words.end());
	for_each(words.begin(),words.end(),[](const string & s){cout<<s<<" ";}); cout<<endl;

	words.erase(end_unique,words.end());
	for_each(words.begin(),words.end(),[](const string & s){cout<<s<<" ";}); cout<<endl;

	partition(words.begin(),words.end(),bind(check_size,_1,sz));		
	for_each(words.begin(),words.end(),[](const string & s){cout<<s<<" ";}); cout<<endl;

}

int main(void)
{
	vector<string> str{"cheng","jin","bo","jin","cheng","long","liu","wangda","xian","die"};
	biggies(str,4);

	return 0;
}
