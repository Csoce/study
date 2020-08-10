#include<iostream>
#include<string>
#include<deque>

using namespace std;
int main(void)
{
	deque<string> a;
	string temp;
	while(cin>>temp)
		a.push_back(temp);
	
	cout<<"\033[1;31;43mprint .......\033[0m"<<endl;
	for(auto & b:a)
		cout<<b<<endl;
	return 0;
}
