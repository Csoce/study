#include<vector>
#include<memory>
#include<iostream>

using namespace std;

shared_ptr<vector<int>> newVector()
{
	return make_shared<vector<int>>();

}

shared_ptr<vector<int>> use_Vector( shared_ptr<vector<int>> p)
{
	int i;
	while(cin>>i)
	{
		p->push_back(i);	
	}
	return p;
}

void * print_Vector(shared_ptr<vector<int>> p)
{
	for(const auto & a: *p)
	{
		cout<<a<<endl;	
	}
}
int main(void)
{
	shared_ptr<vector<int>> p=newVector();
	use_Vector(p);
	print_Vector(p);
	return 0;
}
