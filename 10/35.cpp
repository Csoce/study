#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main(void)
{
	vector<int> sr{1,2,3,4,5,6,7,8,9,10};
	auto bed=--sr.end();

	while(bed!=--sr.begin())
		cout<<*bed--<<endl;


	return 0;
}
