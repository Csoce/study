#include<iostream>
#include<utility>

using namespace std;

template <typename T1,typename T2,typename T3>
void ward(  T1 t1,T2 && t2,T3&& t3)
{
	t1(forward<T3>(t3),forward<T2>(t2));
}

template<typename T1,typename T2>
void f(T1&& t1,T2&& t2)
{
	cout<<t2<<" "<<t1<<endl;
}
int main(void)
{

	ward(f<int ,int>,4,3);
	return 0;
}
