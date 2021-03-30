#include<tuple>
#include<string>
#include<vector>
#include<utility>
#include<iostream>
using namespace std;


int main(void)
{
	tuple<int,int,int> r1(10,20,30);
	cout<<tuple_size<decltype(r1) >::value<<endl;

	constexpr int i=0;
	cout<<get<i>(r1)<<endl;

cout<<"-----------------------------"<<endl;

	tuple<string,vector<string>,pair<string,int>> r2("1",{"2","4","8"},{"10",20});
	return 0;
}

