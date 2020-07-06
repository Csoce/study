#include<iostream>

using namespace std;

int is_maxNum(const int n1,const int * n2)
{
	if(n1>*n2)
		return n1;
	else
		return *n2;
}

int main(void)
{
	int num1,num2;
	cin>>num1>>num2;
	cout<<"num1:"<<num1<<"  "<<"num2:"<<num2<<endl;

	cout<<"max num to :"<<is_maxNum(num1,&num2)<<endl;
	
	return 0;
}
