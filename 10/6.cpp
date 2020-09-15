#include<iostream>
#include<vector>
#include<numeric>
using namespace std;


int main(void)
{
	vector<int> rsult;
	for(int i=0;i!=10;++i)
	{
		cout<<i<<" ";
		rsult.push_back(i);
	}

	cout<<endl;

	fill_n(rsult.begin(),10,0);
	for(const auto & a:rsult)
		cout<<a<<" ";
	
	cout<<endl;

	return 0;
}
