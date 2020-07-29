#include<iostream>
#include<cstdio>
#include<stdio.h>
#include<string>
#include<fstream>

using namespace std;
int main(void)
{
//	ofstream out("1.txt",ofstream::app);
	ofstream out("1.txt");
	if(out)
	{	
		out<<"123"<<endl;
	}


	return 0;
}
