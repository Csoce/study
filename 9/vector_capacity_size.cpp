#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	vector<int> ivec;
	cout<<"\033[31msize:\033[0m"
	<<ivec.size()
	<<"\033[31mcapacity:\033[0m"
	<<ivec.capacity()<<endl;
	
	for(vector<int>::size_type ix=0;ix!=24;++ix)
	{
		ivec.push_back(ix);
	}
	cout<<"\033[31msize:\033[0m"
	<<ivec.size()
	<<"\033[31mcapacity:\033[0m"
	<<ivec.capacity()<<endl;
	
	ivec.reserve(50);
	cout<<"\033[31msize:\033[0m"
	<<ivec.size()
	<<"\033[31mcapacity:\033[0m"
	<<ivec.capacity()<<endl;

	while(ivec.size()!=ivec.capacity())
		ivec.push_back(0);

	ivec.reserve(50);
	cout<<"\033[31msize:\033[0m"
	<<ivec.size()
	<<"\033[31mcapacity:\033[0m"
	<<ivec.capacity()<<endl;

	ivec.push_back(42);

	ivec.reserve(50);
	cout<<"\033[31msize:\033[0m"
	<<ivec.size()
	<<"\033[31mcapacity:\033[0m"
	<<ivec.capacity()<<endl;

	ivec.shrink_to_fit();

	ivec.reserve(50);
	cout<<"\033[31msize:\033[0m"
	<<ivec.size()
	<<"\033[31mcapacity:\033[0m"
	<<ivec.capacity()<<endl;

	return 0;
}
