#include<iostream>


namespace  Exercise{
	int ivar=1000;
	double devar=1000;
	const int limit =1000;
}

//int ivar=10;

//位置1

void mainip()
{
	using namespace Exercise;
	int ivar=10;
	std::cout<<ivar<<std::endl;

	double dvar=3.14;
	std::cout<<dvar<<std::endl;

	int iobj=limit +1;

	std::cout<<limit<<std::endl;

	++ivar;
	std::cout<<ivar<<std::endl;
}

int main(void)
{

	mainip();
}


