#include<iostream>
#include<cstddef>
using namespace std;


void pint(const int * p,size_t size)
{
	for(size_t i=0;i!=size;i++)
	{
		cout<<p[i]<<endl;
	}
}
int main(void)
{
	int i=0,j[2] ={0,1};
	pint(&i,1);
	pint(j,2);
	return 0 ;
}
