#include<iostream>
#include<typeinfo>
using std::endl;
using std::cout;
class A{public: virtual ~A()=default;};
class B:public A{public : ~B(){};};
class C:public B{public: ~C(){};};

int main(void)
{


	A *pa=new C;
	cout<<typeid(pa).name()<<endl;


	C cobj;
//	A& ra=cobj;
//	cout<<typeid(&ra).name()<<endl;

	B *px=new B;
	A& ra=*px;
	cout<<typeid(ra).name()<<endl;

	return 0;
}
