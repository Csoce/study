#include<iostream>

using namespace std;
template<typename... ar>
void p(ar... sl)
{
	cout<<sizeof...(sl)<<" "<<endl;
	cout<<sizeof...(ar)<<" "<<endl;
}
int main(void)
{

	p(1,2,3,"123");
	return 0;
}
