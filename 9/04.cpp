#include<iostream>
#include<vector>
#include<string>

using namespace std;

//bool get(vector<int>::const_iterator be,vector<int>::const_iterator ed, const int & ph)
vector<int>::const_iterator get(vector<int>::const_iterator be,vector<int>::const_iterator ed, const int & ph)
{
	
	while(be!=ed)
	{
		if(*be==ph)	
			return be;
		++be;
	}
	return ed; 
}
int main(void)
{
	vector<int> pr{1,2,3,4,5,6,7};
//	cout<<get(pr.cbegin(),pr.cend(),7)<<endl;

//	cout<<get(pr.cbegin(),pr.cend(),8)<<endl;

	
	cout<<*get(pr.cbegin(),pr.cend(),7)<<endl;
	cout<<*get(pr.cbegin(),pr.cend(),8)<<endl;
	return 0;
}
