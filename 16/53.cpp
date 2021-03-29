#include<iostream>
#include<string>
using namespace std;

template<typename T>
ostream& Print(ostream& os,const T& t)
{
	return os<<t;
}

template<typename T,typename... Args>
ostream& Print(ostream& os,const T& t,Args... args)
{
	os<<t<<",";
	return Print(os,args...);
}

int main(void)
{
	Print(cout,"1",1,'a',"b",3.2,string("1"));
	return 0;
}
