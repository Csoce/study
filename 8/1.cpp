#include<iostream>
#include<string>
std::istream& input(std::istream & in)
{

	std::string s;		

	while(in>>s)
		std::cout<<s<<std::endl; 
	in.clear();		
	return in;		
}

int main(void)
{
	input(std::cin);
	int i=0;
	std::cin>>i; //当流存在问题时  会产生失败的录入
	std::cout<<i<<std::endl;
	return 0; 
}
