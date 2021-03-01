#include<iostream>
using namespace std;
	
class Quote{
public:
	Quote()=default;
	Quote(const string & book,double sales_price):
		bookNo(book),price(sales_price){}
	string isbn()const {return bookNo;}

	virtual double net_price(size_t n)const
		{return n*price;}
private:
	string bookNo;
	double price=0.0;
};
class str: public Quote{
public:
	str():Quote(){}
	 ostream& read(ostream &os)
	{os<<isbn()<<endl;}
};

double print_total(ostream & os,Quote& item,size_t n)
{
	os<<"ISBN:"<<item.isbn()
		<<" # sold: "<< n << " total due: "<<item.net_price(n)<<endl;
	return item.net_price(n);
}
int main(void)
{
	str p;
	p.read(cout);
	return 0;
}
