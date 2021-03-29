#include<iostream>
#include<bitset>
#include<vector>

using namespace std;





int main(void)
{
	bitset<7> b1;
	vector<int> ve{1,2,3,5,8,13,21};
	for(auto const i:ve)
		b1.set(i);

	cout<<b1<<endl;
	return 0;
}
