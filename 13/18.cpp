#include<iostream>
#include<string>
using namespace std;


static int i=10;
class Employee{
	public:
		Employee()=default;
		Employee(string s):name(s),id(++i){}
		Employee(const Employee& emp){this->name=emp.name;this->id=++i;}
		Employee operator=(const Employee & emp){this->name=emp.name;this->id=++i;}

	private:
		string name;
		int id;
	
};
int main(void)
{
	return 0;
}
