#include<iostream>
#include<ctime>
#include<vector>
#include<random>

using namespace std;
vector<unsigned> randVec()
{
	default_random_engine e(time(0));
	uniform_int_distribution<unsigned> u(0,9);

	vector<unsigned> Vec;

	for(size_t i=0;i<10;++i)
		Vec.push_back(u(e));	
	return Vec;	

}
int main(void)
{
	for(auto i:randVec())
		cout<<i<<" ";
	return 0;
}
