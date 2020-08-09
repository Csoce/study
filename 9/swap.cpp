#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(void)
{
	vector<string> a{"1","2","3","4","5"};
	vector<string> b{"6","7","8","9","10","0"};
	vector<string>::iterator p1=a.begin();
	vector<string>::iterator p2=b.begin();
//指向的还是之前的地址 因为交换并不会对其元素进行改变 ，仅改变两个块的名字  所以指向的还是之前的指向地址  故值不会变	
	cout<<*p1<<" "<<*p2<<endl;
	swap(a,b);
	
	cout<<*p1<<" "<<*p2<<endl;
	return 0;
}
