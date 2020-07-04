#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(void)
{
	int num[100]={1,2,3,4,5,6,7,8};
	vector<int> reci(begin(num),end(num));
	for(auto x:num)
		cout<<x<<" ";
	cout<<endl;
	for(auto x:reci)
		cout<<x<<" ";
	cout<<endl;
	return 0 ;

}
