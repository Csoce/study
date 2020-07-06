#include<iostream>
using namespace std;


void turnNumP(int ** p1,int ** p2)
{
	int * p=nullptr;
	p=*p1;
	*p1=*p2;
	*p2=p;
	return ;
}

int main(void)
{
	int num1,num2,*p1=&num1,*p2=&num2;
	cin>>num1>>num2;
	
	cout<<"num1:"<<*p1<<"   "<<"num2:"<<*p2<<endl;
	turnNumP(&p1,&p2);	
	cout<<"num1:"<<*p1<<"   "<<"num2:"<<*p2<<endl;
	return 0;
}
