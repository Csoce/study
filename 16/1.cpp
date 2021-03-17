#include<iostream>
#include<functional>
using namespace std;

template <typename T>
int compare (const T & v1,const T & v2)
{
	if(less<T>()(v1,v2)) return 1;
	if(less<T>()(v2,v1)) return -1;
	return 0;
}
int main(void)
{
	cout<<"3 - 2:"<<	compare(3,2)<<endl;
	cout<<"2 - 3:"<<compare(2,3)<<endl;
	return 0;
}
