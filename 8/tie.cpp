#include<iostream>

int main(void)
{
	//tie 返回关联到对象的流的地址
	//例如：tie 返回关联到cin 的流 cout的地址
	// 默认cin关联 cout
	
	*(std::cin.tie(nullptr))<<"123"<<std::endl;

	return 0;
}
