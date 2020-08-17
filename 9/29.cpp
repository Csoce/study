#include<iostream>
#include<list>
using namespace std;
int main(void)
{
	list<int> result{1,2,3,4};
	result.resize(10);
	cout<<"result->"<<result.size()<<endl;
	result.resize(2,1);

	cout<<"result->"<<result.size()<<endl;
	return 0;
}
