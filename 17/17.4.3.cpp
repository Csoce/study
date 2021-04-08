#include<iostream>
#include<random>
#include<vector>
using namespace std;

vector<unsigned> bad_randVec()
{
	default_random_engine e;
	uniform_int_distribution<unsigned> u(0,9);
	
	vector<unsigned> Vec;
	for(size_t i=0;i<10;++i)
		Vec.push_back(u(e));	
	return Vec;
}
int main(void)
{
	for(auto i:bad_randVec())
	{
		cout<<" "<<i<<" ";
	}
	return 0;
}
