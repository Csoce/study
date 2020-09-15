#include<iostream>
#include<fstream>
#include<iterator>
#include<algorithm>

using namespace std;

int main(int argc,char ** argv)
{
	ifstream ifle(argv[1]);
	ofstream ofle_1(argv[2]);
	ofstream ofle_2(argv[3]);

	istream_iterator<int> item_iter(ifle),ieof;	
	ostream_iterator<int> otem_iter_1(ofle_1," ");
	ostream_iterator<int> otem_iter_2(ofle_2," ");

	while(item_iter!=ieof)
	{
		if(*item_iter%2==0)
		{
			*otem_iter_1++=*item_iter++;		
		}
		else
		{
			*otem_iter_2++=*item_iter++;
		}
	}
	return 0;
}
