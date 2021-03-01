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
protected:
	double price=0.0;
};
class Bulk_quote:public Quote{
public:
	Bulk_quote()=default;
	Bulk_quote(const string &book,double p,size_t qty,double disc);
	double net_price(size_t cnt)const override;
private:
	size_t min_qty=0;//
	size_t mid_qty=10;//不超过的数量
	double discount=0.0;
};

double Bulk_quote::net_price(size_t cnt) const 
{
	if(cnt>=mid_qty)
		return mid_qty*(1-discount)*price+(cnt-mid_qty)*price;
	else
		return cnt*price;
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
	return 0;
}
