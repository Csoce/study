#include<iostream>
#include<new>
#include<string>

using namespace std;


int main(void)
{
	
	cout<<"input size new space: ";
	size_t size;
	cin>>size;
	
	cin.ignore();

	char *p =new char[size+1];
	cout<<"input char to new space:";
	cin.get(p,size);

	cout<<p<<endl;
	
	

	return 0;

}
