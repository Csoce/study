#include<string>
#include<vector>

template <typename T> class Foo{
public:
	static std::size_t count(){return ctr;}
private:
	static std::size_t  ctr;
};
//每一个静态的模板类数据成员都必须且定义一次
//且必须为模板类定义
//
//静态的模板类成员函数不需要此行为

template<typename T> size_t Foo<T>::ctr;

int main(void)
{
	Foo<int> t;
	auto i= Foo<int>::count();
	return 0;
}
