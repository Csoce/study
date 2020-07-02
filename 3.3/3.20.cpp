#include<iostream>
#include<vector>

using namespace std;
int main(void)
{
	
	vector<int> num;
	int i=0;
	while(cin>>i)
	{
		num.push_back(i);	
	}
	cout<<"sum:"<<(unsigned)num.size()<<endl;
	for(i=0;i!=num.size();i++)	
	{
		cout<<" "<<num[i];
	}

	cout<<"first+second=num"<<endl;
	for(i=0;i<num.size()-1;i+=2)
	{
		
		cout<<"and sum:"<<num[i]<<"+"<<num[1+i]<<"="<<num[i]+num[i+1]<<endl;
	}
	if(i==num.size()-1)
		cout<<"last num:"<<num[num.size()-1]<<endl;

	
	cout<<"first+last=num"<<endl;
	for(i=0;i<num.size()/2;i++)
	{
		cout<<"and sum:"<<num[i]<<"+"<<num[num.size()-1-i]<<"="<<num[i]+num[num.size()-i-1]<<endl;
	}
	if(num.size()/2*2!=num.size())
	{
		cout<<"lalf num:"<<num[num.size()/2]<<endl;
	}	
		
	return 0; 
}
