#include<iostream>
using namespace std;



enum class r1{
	int1,
	int2,
	int3
};

int main(void)
{
	r1 pa=r1::int1;

	int  sdf=static_cast<int>(r1::int1 );

	cout<<sdf<<endl;

	return 0;

}
