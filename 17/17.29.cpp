#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<random>
#include<string>
#include<sstream>
using namespace std;
vector<unsigned> randVec(int re)
{
	
	default_random_engine e(re);
	uniform_int_distribution<unsigned> u(0,9);

	vector<unsigned> Vec;

	for(size_t i=0;i<10;++i)
		Vec.push_back(u(e));	
	return Vec;	

}
int main(int i,const char** vec)
{
	if(i==2)
	{
		cout<<"your push :"<<vec[1]<<endl;
		int ii=atoi(*(++vec));	
		cout<<ii<<endl;

	
	for(auto i:randVec(ii )  )
		cout<<i<<" ";
	}
	return 0;
}
