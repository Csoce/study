#include<iostream>
#include<string>
using namespace std;

class NoDotr
{
	public:
		NoDotr()=default;
		NoDotr(int s):i(s){}
		~NoDotr()=delete;
		void print(ostream & s){s<<i<<endl;}
	private:
		int i;
};



int main(void)
{

	NoDotr* p=new NoDotr(1);
	p->print(cout);
	return 0;
}
