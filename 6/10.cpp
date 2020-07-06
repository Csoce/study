#include<iostream>
using namespace std;
int num1furnnum2(int *n1,int*n2)
{
	*n1=*n1^*n2;
	*n2=*n1^*n2;
	*n1=*n1^*n2;	
}

int main(void)
{
	int n1=1,n2=2;
	cout<<"n1="<<n1<<" "<<"n2="<<n2<<endl;
	num1furnnum2(&n1,&n2);
	cout<<"n1="<<n1<<" "<<"n2="<<n2<<endl;
	
}



