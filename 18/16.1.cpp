#include<iostream>

namespace bilp
{
	int i=1;
}



int maia()
{
	//using namespace bilp;
	using bilp::i;
int i=2;
	std::cout<<i<<std::endl;
}

int main(void)
{
	maia();
	return 0;
}
