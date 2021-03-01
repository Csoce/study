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
class Disc_quote :public Quote{
public:
	Disc_quote()=default;
	Disc_quote(const string &book,double price,
			size_t qty,double disc):
			Quote(book,price),
			quantity(qty),discount(disc){}
	double net_price(size_t ) const =0;
protected:
	size_t quantity=0;
	double discount=0.0;	
};
class Bulk_quote:public Disc_quote{
public:
	Bulk_quote()=default;
	Bulk_quote(const string &book,double p,size_t qty,double disc):
	Disc_quote(book,p,qty,disc){}
	double net_price(size_t cnt)const override;
};


double Bulk_quote::net_price(size_t cnt) const 
{
 	if(cnt >=quantity)	
		return (1-discount)*price*cnt;
	else
		return price*cnt;
}

int main(void)
{
	Bulk_quote p("lan",100,5,0.1);
	cout<<p.isbn()<<p.net_price(10)<<endl;
	cout<<p.isbn()<<p.net_price(9)<<endl;
	cout<<p.isbn()<<p.net_price(1)<<endl;
	//Disc_quote w;		
	return 0;
}
