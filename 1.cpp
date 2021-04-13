#include<iostream>

class A{public:virtual ~A()=default;A()=default;};
class B:public A{ public:~B(){}; B()=default; };
class C:public B{ public:~C(){};C()=default; };

class D:public B,public A{public: ~D(){};D()=default;};
int main(void)
{
	
//	A *pa=new C;
//	B *pb=dynamic_cast<B*>(pa);
	

//	B *pb=new B;
//	C* pc=dynamic_cast<C*>(pb);
//
	A *pa=new D;
	B *pb=dynamic_cast<B*>(pa);
	return 0;
}
