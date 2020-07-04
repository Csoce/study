#include<iostream>
#include<vector>
#include<string>
#include<cstddef>
using std::vector;
using std::cout;
using std::endl;
int main(void)
{


//	3.31
	int num[10];
	for(int i=0;i<10;i++)
		num[i]=i;		


//  	3.32
	int num1[10];
	for(int i=0;i<10;i++)
	{
		num1[i]=num[i];	
	}	

//	3.33
	vector<int> venum;
	for(int i=0;i<10;i++)
	{
		venum.push_back(i);
	}	
	vector<int> venum1=venum;


	for(int i=0;i<10;i++)
	{
		cout<<num[i]<<" "<<num1[i]<<" "<<venum[i]<<" "<<venum1[i]<<endl;
	}
	return 0;
}
