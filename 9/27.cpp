#include<iostream>
#include<forward_list>
#include<string>
using namespace std;

int main(void)
{
	forward_list<int> result{1,2,3,4,5,6,7,8,9};
	
	for(auto & a:result)
		cout<<a<<" ";

	cout<<endl<<"\033[1;31m...print forward_list_body...\033[0m"<<endl;

	auto be=result.begin();
	auto before=result.before_begin();
	
	while(be!=result.end())
	{
		if(*be%2)
		{
			be=result.erase_after(before);		
		}
		else
		{
			before=be;
			++be;
		}
	}

	
	for(auto & a:result)
		cout<<a<<" ";
	cout<<endl;
	return 0;

}
