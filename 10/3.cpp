#include<iostream>
#include<numeric>
#include<vector>

using namespace std;


int main(void)
{

	vector<int> retc;
	for(int i=0;i!=10;++i)
	{
		cout<<i<<" ";
		retc.push_back(i);
	}

	cout<<endl;	

	int num=accumulate(retc.begin(),retc.end(),0);
	cout<<"num:"<<num<<endl;
	
	
	
	return 0;
}
