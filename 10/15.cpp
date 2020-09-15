#include<iostream>

using namespace std;

int main(void)
{	
	int i=1;
	auto p=[i](const int &t){return i+t;};
	cout<<p(2)<<endl;
	return 0;
}
