#include<iostream>
#include<string>
using namespace std; 
int main(void)
{
	string str;
	cout<<"printf line to there"<<endl;
	getline(cin,str);
	cout<<str<<endl;
	
	cout<<"print word to there "<<endl;
	while(cin>>str && str[0]!='q')
	{
		cout<<str<<endl;
	}
	
	return 0; 
}
