#include<iostream>
#include<forward_list>
#include<vector>
using namespace std;
int main(void)
{
	forward_list<int> vi{0,1,2,3,4,5,6,7,8,9};
	for(auto &a:vi)
		cout<<a<<" ";
	cout<<endl;
	auto iter=vi.begin();
	auto before_iter=vi.before_begin();

	while(iter!=vi.end())
	{

		if(*iter%2)
		{
			iter=vi.insert_after(iter,*iter);
			++iter;
			++before_iter;
			++before_iter;
		}
		else
		{
			iter=vi.erase_after(before_iter);
		}
	}

	for(auto &a:vi)
		cout<<a<<" ";
	cout<<endl;

	return 0;
}
