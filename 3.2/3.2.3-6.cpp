#include<iostream>
#include<string>

using namespace std;
int main(void)
{
	string str="ajflsdjfalsdjfdsljf";

	cout<<"The str is:"<<str<<endl;
	for(auto & x:str)
	{
		x='x';
	}

	cout<<"Change str is:"<<str<<endl;
	return 0 ;
}


