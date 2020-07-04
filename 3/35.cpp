#include<iostream>
#include<iterator>

using namespace std;
int main(void)
{
	int num[10]={};
	int *p=num;
	int *cend=end(num);
	while(p!=cend)
	{
		*p=1;
		++p;
	}	
	p=num;
	
	while(p!=cend)
	{
		cout<<*p++;
	}	
	cout<<endl;
	return 0;
}
