#include<iostream>
#include<cstring>
using namespace std;

int main(void)
{
	char s1[100]="abcdefg";
	char s2[100]="qwer";
	char s3[200];
	strcpy(s3,s1);
	strcat(s3,s2);
	cout<<s1<<endl<<s2<<endl<<s3<<endl;
	return 0 ;
}
