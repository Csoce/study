#include<vector>
#include<new>
#include<iostream>

using namespace std;

vector<int> * newVector()
{
	return new vector<int>;

}

vector<int> * use_Vector(vector<int> * p)
{
	int i;
	while(cin>>i)
	{
		p->push_back(i);	
	}
	return p;
}

void * print_Vector(vector<int> * p)
{
	for(const auto & a: *p)
	{
		cout<<a<<endl;	
	}
	delete p;
	p=nullptr;
	return p;
}
int main(void)
{
	vector<int> * p=newVector();
	cout<<p<<endl;

	use_Vector(p);
	void * q=print_Vector(p);
	
	cout<<q<<endl;
	return 0;
}
