#include<iostream>
#include<string>
using namespace std;
struct Person
{
friend istream& read(istream &is,Person & item);
friend ostream& print(ostream &os,const Person & item);
friend Person add(Person& hs1,Person& hs2);
	public:
	//构造函数
	Person()=default;
	Person(const string &str,const string &fhome,double pre):Name(str),family_Home(fhome),Homeprice(pre){}
	//成员函数
	string& reName(){return Name;} //若this 加const 咋返回类型也应该加const 
	string& reFamily_home() {return family_Home;} 
	double& reHomeprice() {return Homeprice;}	
	//数据成员
	private:	
	string Name;
	string family_Home;
	double Homeprice;
	mutable int count=0;//可变参数
};
istream& read(istream &is,Person & item)
{
	double price=0;

	is>>item.Name>>item.family_Home>>price;
	item.Homeprice+=price;
	return is;

} 
ostream& print(ostream &os,const Person & item)
{
	return os<<item.Name<<" "<<item.family_Home<<" "<<item.Homeprice;

}
Person add(Person& hs1,Person& hs2)
{

	Person re=hs1;

	re.Homeprice+=hs2.Homeprice;

	if(re.Name!=hs2.Name)
		re.Name+="|"+hs2.Name;
	if(re.family_Home!=hs2.family_Home)
		re.family_Home+="|"+hs2.family_Home;

	return re;	

}

int main(void)
{
//	Person s,t;
//	read(cin,s);
//	read(cin,t);
//	print(cout,add(s,t));
	Person p("macheng","wuhan",100);
	print(cout,p);
	return 0;
}
