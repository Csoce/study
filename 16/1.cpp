#include<iostream>
#include<cstring>
#include<string>
using namespace std;



template<unsigned N,unsigned M>
int compare(const char (&p1) [N],const char (&p2)[M])
{
	cout<<N<<" "<<M<<endl;
	return strcmp(p1,p2);
}

int main(void)
{
	cout<<compare("131","jlsjfl")<<endl;
	return 0;
}
