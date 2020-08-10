#include<vector>
#include<iostream>
using namespace std;
int main(void)
{
	vector<int> a{1,2,3,4};
	vector<int> b{1,2,3};
	vector<int> c{1,2,5};

	cout<<"a<b"<<(a<b)<<endl;
	cout<<"a==b"<<(a==b)<<endl;
	cout<<"a<c"<<(a<c)<<endl;

	return 0;
}
