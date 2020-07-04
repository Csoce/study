#include<iostream>
#include<string>
using namespace std;


int main(void)
{
	
	string str;
	cout<<"Please input str:";
	getline(cin,str);
	cout<<"your input str ["<<str<<"] wait.... "<<endl;
	int i=0;
	while(!str.empty()&&i!=str.size())
	{
		if( ispunct(str[i]))	
		{
			str[i]=' ';
		}
		i++;
	}
	cout<<"no include punct str:"<<str<<endl;
	
	return 0; 
}
