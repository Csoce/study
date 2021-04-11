#include<iostream>
#include<random>
using namespace std;

int main(void)
{
	default_random_engine e;
	for(size_t i=0;i<10;++i)
	{
		cout<<e()<<endl;
	}
	return 0;
}
