#include<iostream>
#include<set>
#include<memory>
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

class Basket{
public:
	void add_item(const  shared_ptr<Quote> & sale){items.insert(sale);}
	double total_receipt(ostream &) const;
private:
	static bool compare(const shared_ptr<Quote> &lhs,
			    const shared_ptr<Quote> &rhs)
		{return lhs->isbn()<rhs->isbn();}
		
	multiset< shared_ptr<Quote>,decltype(compare)*> items{compare};
};

double Basket::total_receipt(ostream & os)const 
{
	double sum =0.0;
	for(auto iter=items.cbegin();
		iter!=items.cend();
		iter=items.upper_bound(*iter))
	{
		sum+=print_total(os,**iter,items.count(*iter));
	}
	os<<"Total Sale: "<<sum<<endl;
	return sum;
}
int main(void)
{
	str p;
	p.read(cout);
	return 0;
}
