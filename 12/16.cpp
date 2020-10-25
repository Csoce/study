#include<iostream>
#include<memory>
#include<string>

using namespace std;

int main(void)
{
	unique_ptr<int> p(new int(1));
	cout<<*p<<endl;

	return 0;
}
