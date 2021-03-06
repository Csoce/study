#include<string>
#include<memory>
#include<iostream>
using namespace std;

int main(void)
{
	int n=10;
	allocator<string> alloc;
	auto const p =alloc.allocate(n);
	
	auto q=p;
	string s;

	while(cin>>s && q!=p+n)
		alloc.construct(q++,s);

	while(q!=p)
	{
		
		cout<<*--q<<" ";
		alloc.destroy(q);
	}	

	alloc.deallocate(p,n);

	return 0;

}
