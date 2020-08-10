#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main(void)
{
	list<int> result{1,2,3,4,5,6,7,8,9,20};

	deque<int> odd_num;	//奇数
	deque<int> even_num;	//偶数
	
	for(auto &a:result)
	{
		if(a%2==0)
			even_num.push_back(a);
		else
			odd_num.push_back(a);
	}	
	
	cout<<"\033[1;31m print odd_number...\033[0m"<<endl;
	
	for(auto &a:odd_num)
		cout<<a<<" ";
	cout<<endl;

	
	cout<<"\033[1;31m print even_number...\033[0m"<<endl;
	
	for(auto &a:even_num)
		cout<<a<<" ";
	cout<<endl;
	return 0;
 }
