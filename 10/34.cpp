#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>

using namespace std;

int main(void)
{
	vector<int> sr{1,2,3,4,5,6,7,8,9,10};
	ostream_iterator<int> p(cout," ");

	copy(sr.crbegin(),sr.crend(),p);

	return 0;
}
