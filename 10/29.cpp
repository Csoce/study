#include<vector>
#include<string>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<iterator>

using namespace std;

int main(void)
{
	vector<string> str;
	ifstream fp("29.cpp.txt");

	istream_iterator<string> item_iter(fp),ieof;
	ostream_iterator<string> otem_iter(cout," ");

	copy(item_iter,ieof,back_inserter(str));	
	copy(str.begin(),str.end(),otem_iter);	

	fp.close();	
	return 0;
}
