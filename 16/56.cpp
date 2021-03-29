#include<iostream>
#include<sstream>
#include<string>
using namespace std;

template<typename T>
ostream& Print(ostream&os,const  T& t)
{
	return os<<t;
}
template<typename T,typename... Args>
ostream& Print(ostream& os,const T& t,Args... args)
{
	os<<t<<",";
	return Print(os,args...);
}

template<typename T >
 string debug_rep(const T& t)
{
	cout<<" <<< "<<t<<" >>> ";
	ostringstream p;

	p<<t;
	return p.str();

}

template<typename... Args>
ostream& errorMsg(ostream &os,const Args&... rest)
{

	return Print(os,debug_rep(rest)...);
}

using namespace std;

int main(void)
{
	errorMsg(cout,"1",1,'1',string("1"),1.1);
	return 0;
}
