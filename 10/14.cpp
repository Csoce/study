#include<iostream>
#include<vector>

using namespace std;


int main(void)
{
	auto p=[](const int &i,const int & i2){return i+i2;};
	cout<<p(1,2)<<endl;
	return 0;
}
