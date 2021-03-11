#include<iostream>
#include<string>
using namespace std;

static long p(const int sum)
{
	return sum*sum;	
}

long r(const int sum)
{
	return sum*10;
}
int main(void)
{
	long (*pd)(const int) =&p;
	cout<<p(2)<<endl;
	cout<<pd(3)<<endl;
	
	pd=&r;
	cout<<r(2)<<endl;
	cout<<pd(3)<<endl;
	
	
	return 0;
}
