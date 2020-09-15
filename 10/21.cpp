#include<iostream>

using namespace std;

int main(void)
{
	int i=10;
	auto p=[&i]() ->bool{if(i){ cout<<i<<endl;--i;return false;}else return true;};

	for(int t=0;t!=20;++t)
	{
		if(p())	return 0;
	}

	return 0;
}
