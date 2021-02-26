#include<iostream>
#include<string>
using namespace std;


class str{
public:
	str(int p):pit(p){}
	operator int() const {return pit;}
private:
	int pit=0;
};
int main(void)
{
	str sre(3);
	cout<<sre+1<<endl;
	sre=7;

	cout<<sre+1<<endl;
	return 0;
}
