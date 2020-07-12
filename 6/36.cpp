#include<iostream>
#include<string>
using namespace std;
//标准状态
string  (&gave_123(string (&str)[10]))[10]
{
	return str;
}

//尾部状态
auto gave_124(string (&str)[10])->string(&)[10]
{
	return str;
}
//别名
using arry=string[10];
arry* gave_125(string (&str)[10])
{
	return &str;
}
int main(void)
{

	string p[10]={"1231","cheng","sf"};
	cout<<"·······················"<<endl;
	for(auto x:gave_123(p))
		cout<<x<<"  ";
	cout<<endl;
	cout<<"·······················"<<endl;
	for(auto x:gave_124(p))
		cout<<x<<"  ";
	cout<<endl;
	cout<<"·······················"<<endl;
	for(auto x:*gave_125(p))
		cout<<x<<"  ";
	cout<<endl;
	return 0 ;
}
