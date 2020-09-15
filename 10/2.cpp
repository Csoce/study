#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<list>

using namespace std;

int main(void)
{
	list<string> vetc;
	for(int i=0;i!=10;++i)
{		vetc.push_back(to_string(i/3));
	cout<<to_string(i/3)<<" ";
	
}
	
	cout<<endl<<"count 0:"<<count(vetc.begin(),vetc.end(),"0")<<endl;
	return 0;
}
