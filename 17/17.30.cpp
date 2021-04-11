#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>
#include<random>
#include<string>
#include<sstream>
using namespace std;
vector<unsigned> randVec(int re,int re2,int re3)
{
	
	default_random_engine e(re);
	uniform_int_distribution<unsigned> u(re2,re3);

	vector<unsigned> Vec;

	for(size_t i=0;i<10;++i)
		Vec.push_back(u(e));	
	return Vec;	

}
int main()
{
		cout<<"plase input seed numer:  "<<endl;
		int ii,i2,i3;
		cin>>ii>>i2>>i3;
	
	for(auto i:randVec(ii,i2,i3 )  )
		cout<<i<<" ";
	return 0;
}
