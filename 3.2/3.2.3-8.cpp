
#include<iostream>
#include<string>

using namespace std;
int main(void)
{
	string str="ajflsdjfalsdjfdsljf";

	cout<<"The str is:"<<str<<endl;
	int i=0;
//	while(i<str.size())
//	{
//		str[i]='x';
//		i++;
//	}

	for(int i=0;i<str.size();i++)
	{
		str[i]='x';
		
	}
	cout<<"Change str is:"<<str<<endl;
	return 0 ;
}


