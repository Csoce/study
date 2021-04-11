#include<iostream>
#include<random>
using namespace std;

int main(void)
{
	uniform_int_distribution<unsigned> u(0,9);
	default_random_engine e;
	
	cout<<"min:"<<e.min()<<"max:"<<e.max()<<endl;

	for(size_t i=0;i<10;++i)
		cout<<u(e)<< " ";
	return 0;
}
