#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	char str1[100],str2[100];
	int count=0;
	cout<<"input str1 for string:";
	cin>>str1;
	cout<<"input str2 for string:";
	cin>>str2;
	if(str1[count]=='\0' || str2[count]=='\0')
	{
		if(str1[count]=='\0' && str2[count]=='\0')
		{
			cout<<"str1 and str2 equal"<<endl;return 0;

		}
		else if(str1[count]=='\0')
		{
			cout<<"str2 max:"<<str2<<endl;return 0;	
		}
		else if(str2[count]=='\0')
		{
			cout<<"str1 max:"<<str1<<endl;return 0;	
		}
	}
	while(1)
	{
		if(str1[count]>str2[count])
		{
			cout<<"str1 max:"<<str1<<endl;	
			return 0;
		}		
		else if(str1[count]<str2[count])
		{

			cout<<"str2 max:"<<str2<<endl;	
			return 0;
		}
		else if(str1[count]=='\0' && str2[count]=='\0')
		{
			cout<<"str1 and str2 equal" <<endl;
			return 0;
		}
		++count;
	}	
	return 0;




}
