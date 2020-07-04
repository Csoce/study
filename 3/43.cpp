#include<iostream>
#include<iterator>
using namespace std;
using ptype=int[4];
int main(void)
{
	int ia[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
	cout<<"``````````````` for(1:2) ```````````````````"<<endl;
	for(auto &x:ia)
		for(auto t:x)
			cout<<t<<" ";
		cout<<endl;
	
	cout<<"``````````````` for(1;2;3) ```````````````````"<<endl;
	for(int i=0;i<3;i++)
		for(int j=0;j<4;j++)
			cout<<ia[i][j]<<" ";
		cout<<endl;

	cout<<"``````````````` for(*1;2;3) ```````````````````"<<endl;
	for(int (*p)[4]=ia;p!=ia+3;p++)
	{
		for(int *q=*p;q!=*p+4;q++)
			cout<<*q<<" ";
		cout<<endl;
	}

	cout<<"```````````````using  for(*1;2;3) ```````````````````"<<endl;
	for( ptype *p=ia;p!=ia+3;p++)
		for(int * q=*p;q!=*p+4;q++)
			cout<<*q<<" ";
		cout<<endl;	

	cout<<"```````````````auto  for(*1;2;3) ```````````````````"<<endl;
	for(auto p=ia;p!=ia+3;p++)
		for(auto q=*p;q!=*p+4;q++)
			cout<<*q<<" ";
		cout<<endl;

	return 0;
}
