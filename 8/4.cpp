#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;
int main(void)
{
	ifstream in("read.txt");
	ifstream in2("read.txt");
	vector<string> strfileLine;
	vector<string> strfileCw;
	if(in)
	{
		string temp;
		while(getline(in,temp))
		{
		strfileLine.push_back(temp);
	}
		while(in2>>temp) 
		//直接读取时  会按照待读取类型进行划分  例如本例中的：hello are you
		//首先读取hello 后发现空格 会认为读取结束  加入后 开始读取第二段 丢弃掉前面的空格
		//于是第二段are也被取成功...  以此类推
		{
		strfileCw.push_back(temp);
	}

}
	for(auto bg=strfileLine.begin();bg!=strfileLine.end();++bg)
	{
		cout<<*bg<<endl;

	}
	
		for(auto bg=strfileCw.begin();bg!=strfileCw.end();++bg)
	{
		cout<<*bg<<endl;

	}
	
	
	return 0; 
}
