#include<iostream>
#include<vector>
using namespace std;
int reNum(int a,int b)
{
	return a+b;
}
int rea_b(int a,int b)
{
	return a-b;
}
int reaofb(int a,int b)
{
	return a*b;
}
int reainb(int a,int b)
{
	return a/b;
}
int main(void)
{
	vector<int (*)(int,int)> pint;
	pint.push_back(reNum);	
	pint.push_back(rea_b);	
	pint.push_back(reaofb);	
	pint.push_back(reainb);	
	int a=4,b=2;
	for(auto x:pint)
		cout<<x(a,b)<<endl;
	
	return 0;
}
