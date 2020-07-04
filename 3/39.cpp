#include<iostream>
#include<string>
int main(void)
{
	using namespace std;
	cout<<"```````````````` string ````````````````````````````"<<endl;
	string s1,s2;
	cin>>s1>>s2;
	cout<<"s1-->"<<s1<<endl<<"s2-->"<<s2<<endl;

	if(s1>s2)
		cout<<"max str1"<<s1<<endl;
	else if(s2>s1)
		cout<<"max str2"<<s2<<endl;
	else 
		cout<<"str1 ==str2"<<endl;


	cout<<"```````````````` char  ````````````````````````````"<<endl;
	char str1[100],str2[100];
	
	cin>>str1>>str2;
	cout<<"s1-->"<<str1<<endl<<"s2-->"<<str2<<endl;
	
	int n=0;	
	while(str1[n]!='\0' || str2[n]!='\0')
	{
		if(str1[n]>str2[n])
		{
			cout<<"max str1"<<str1<<endl;
			return 0;
		}
		else if(str1[n]<str2[n])
		{
			cout<<"max str2"<<str2<<endl;
			return 0 ;
		}
		++n;		
	}

	if(str1[n]=='\0'&&str2[n]=='\0')
		cout<<"str1 == str2"<<str1<<endl;	
	else if(str1[n]=='\0')
		cout<<"str2 max "<<endl;
	else
		cout<<"str1 max"<<endl;

	return 0 ;
}
