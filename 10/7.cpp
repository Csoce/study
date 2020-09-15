#include<vector>
#include<iostream>
#include<numeric>

using namespace std;

int main(void)
{

	vector<int> vec;
	fill_n(vec.begin(),10,0);
	for(const auto  &a:vec)
		cout<<a<<" ";
	cout<<endl;
	return 0;
}
