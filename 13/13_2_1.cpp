#include<iostream>
#include<string>
using namespace std;

class HaPstr
{
	public:
		HaPstr(const string& s=string()):ps(new string(s)),i(0){}

		HaPstr(const HaPstr & mp){ ps=new string(*mp.ps);i=mp.i;}
		HaPstr& operator=(const HaPstr & s){delete ps;ps=new string(*s.ps);i=s.i;return *this;}
		~HaPstr(){delete ps;}

	private:
		string * ps;
		int i;

};
int main(void)
{
	return 0;
}
