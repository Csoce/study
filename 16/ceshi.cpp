#include<iostream> 

constexpr auto curry=[](auto f)
{
	return [=](auto x)
	{
		return [=](auto y)
		{
			return f(x,y);
		}
	}
};

auto f=[](auto x,auto y){return x+y;};
auto g=curry(f);

int main(void)
{
	printf("%d,%d\n",f(1,2),g(1));
	return 0;
}
