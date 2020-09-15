#include<iostream>
//#include<list>
#include<forward_list>
#include<algorithm>

using namespace std;

int main(void)
{
	forward_list<int> lst{1,2,3,4,5,6,7},lst2{8,9,0,1};

	//lst.splice(lst.begin(),lst2);//插入到lst 指定迭代器之前
	//lst.splice(lst.begin(),lst2,lst2.begin());//插入指定的元素到lst指定迭代器之前
	//lst.splice(lst.begin(),lst2,lst2.begin(),lst2.end());	//插入lst2的范围到lst指定位置之前
	
	//lst.splice_after(lst.begin(),lst2);//插入到lst 指定迭代器之后
	//lst.splice_after(lst.begin(),lst2,lst2.begin());//将lst2指定位置之后的一个元素插入到lst指定位置之后
	//lst.splice_after(lst.begin(),lst2,lst2.begin(),lst2.end());//将lst2开始的后一个位置到结束位置（不包含结束位置）添加到lst之后	

	for(const auto & a :lst)

		cout<<a<<" ";cout<<endl;


	return 0;
}
