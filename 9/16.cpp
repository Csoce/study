#include<list>
#include<vector>
#include<iostream>
using namespace std;
int main(void)
{
	list<int> a{1,2,3,4,1};
	vector<int> b{1,2,3,4,1};

	auto n1=a.begin();
	auto n2=b.begin();

	while(n1!=a.end() && n2!=b.end())
	{
		if(*n1>*n2)
		{		cout<<"n1>n2"<<endl;return 0;}
		else if(*n1<*n2)
		{		cout<<"n1<n2"<<endl;return 0;}

		++n1;
		++n2;
	}
	if(n1==a.end() && n2==b.end())
	
	cout<<"n1==n2"<<endl;
	else if(n1==a.end())
		cout<<"n1<n2"<<endl;
	else
		cout<<"n1>n2"<<endl;

	return 0;
}

