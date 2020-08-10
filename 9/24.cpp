#include<vector>
#include<iostream>
using namespace std;
int main(void)
{
	vector<int> p;
	cout<<"front"<<endl;
	p.front();
	cout<<"begin"<<endl;
	p.begin();
	cout<<"[n]"<<endl;
	p[0];
	cout<<"at(n)"<<endl;
	p.at(0);
	return 0;
}
