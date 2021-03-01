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
	virtual void debug(ostream &os) const 
	{
		os<<"Quote "<<this->bookNo<<" "<<price;
	}
private:
	string bookNo="QuotebookNo";
protected:
	double price=0.0;
};
class Bulk_quote:public Quote{
public:
	Bulk_quote()=default;
	Bulk_quote(const string &book,double p,size_t qty,double disc);
	double net_price(size_t cnt)const override;
private:
	size_t min_qty=0;
	double discount=0.0;
	void debug(ostream& os) const override
	{
		os<<"Bulk_quote "<<this->min_qty<<" "<<this->discount;
	}
};

double Bulk_quote::net_price(size_t cnt) const 
{
	if(cnt>=min_qty)
		return cnt*(1-discount)*price;
	else
		return cnt*price;
}
void debug_print(ostream&os,Quote&p)
{
	p.debug(os);	
}
Bulk_quote::Bulk_quote(const string &book,double p,size_t qty,double disc):
min_qty(qty),discount(disc){}

double print_total(ostream & os,Quote& item,size_t n)
{
	os<<"ISBN:"<<item.isbn()
		<<" # sold: "<< n << " total due: "<<item.net_price(n)<<endl;
	return item.net_price(n);
}
int main(void)
{
	Quote quote1("Quote bookNo",1);
	Bulk_quote Bulk_quote1("Quote bookNo",1,10,0.1);
	
	debug_print(cout,quote1);
	debug_print(cout,Bulk_quote1);

	return 0;
}
