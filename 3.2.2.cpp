#include<iostream>
#include<string>
using namespace std; 
int main(void)
{
	string str;
	cout<<"printf line to there[size<10]"<<endl;
	getline(cin,str);
	cout<<str<<endl;
	
	cout<<"print word to there [size<10]"<<endl;
	while(cin>>str && str[0]!='q')
	{
		cout<<str<<endl;
	}
	
	return 0; 
}
