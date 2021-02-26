#include<iostream>
using namespace std;
class p{
public:
	p(int w=0):c(w){};
private:
	int c;
};
p   operator+ (const p&,const p&){ ;};
int main(void)
{
	p onep;
	p one2(1);
	p one3(2.1);
onep+3.1;	
	return 0;
}
