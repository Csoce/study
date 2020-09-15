#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
void biggies(vector<string> &words,vector<string>::size_type sz)
{
	sort(words.begin(),words.end());
	auto isunique=unique(words.begin(),words.end());
	words.erase(isunique,words.end());
	
	stable_sort(words.begin(),words.end(),
		[](const string & a,const string &b)
		{return a.size()<b.size();}
		);
	
	auto wc=find_if(words.begin(),words.end(),
		[sz](const string &a)
		{return a.size()>=sz;});

	auto count=words.end()-wc;	
	cout<<count<<" "<<"of length "<<sz<<" or longer"<<endl;
	
	for_each(wc,words.end(),
	[](const string &s)
	{
		cout<<s<<" ";
	});
	cout<<endl;
}

int main(void)
{
	vector<string> str{"cheng","jin","bo","longda","panda","zhu"};
	biggies(str,5);


	return 0;
}
