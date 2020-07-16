#include<iostream>
#include<cstdlib>
using namespace std;
class x;
class y;
class x{

public:
private:
	x* x_p=nullptr;
	y* y_p = nullptr;
};
class y{

public:
private:
	x* x_p = nullptr;
	y* y_p = nullptr;
};
int main(void)
{
	x P1;

	y p2;
	return 0; 

}
