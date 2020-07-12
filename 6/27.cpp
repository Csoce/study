#include<iostream>
#include<initializer_list>
using namespace std;

int countNum(initializer_list<int>linum)
{
	int sum=0;	
	for(auto n=linum.begin();n!=linum.end();++n)
	{
		sum+=(*n);
	}
	return sum;
}
int main(void)
{
	cout<<"initializer_list by count add equal:"<<countNum({1,2,3,4,5,6,7})<<endl;
	return 0 ;
}
