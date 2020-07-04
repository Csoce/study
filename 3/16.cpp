//3.13 内容容量的估算

#include<iostream>
#include<vector>
#include<string>
#include<cstring>

using namespace std;
int main(void)
{
	vector<int> v1;
	cout<<"vector<int> v1:"<<(int)v1.size()<<endl;

	vector<int> v2(10);
	cout<<"vecotor<int> v2(10):"<<(int)v2.size()<<endl;

	vector<int> v3(10,42);
	cout<<"vector<int> v3(10,42):"<<(int)v3.size()<<endl;

	vector<int> v4{10};
	cout<<"vector<int> v4{10}:"<<(int)v4.size()<<endl;

	vector<int> v5{10,42};
	cout<<"vector<int> v5{10,42}:"<<(int)v5.size()<<endl;

	vector<string> v6{10};
	cout<<"vector<string> v6{10}:"<<(int)v6.size()<<endl;

	vector<string> v7{10,"hi"};
	cout<<"vector<string> v7{10,'hi'}:"<<(int)v7.size()<<endl;

	
	return 0; 
}
