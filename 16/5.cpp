#include<iostream>
#include<string>
#include<vector>
using namespace std;

template <typename T1>
auto atr(const T1 &t1,const int  t2 ) ->decltype(*t1.begin())
{
	for(auto i:t1)
		if(i==t2)
			return i;

}
int main(void)
{
	vector<int> p{1,2,3,4,5};

	cout<<atr(p,2)<<endl;

	return 0;
}
