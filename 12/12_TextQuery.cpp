#include<iostream>
#include<sstream>
#include<fstream>
#include<map>
#include<set>
#include<memory>
#include<string>
#include<vector>

using namespace std;
class TestResult;
class TestQuery
{
	public:
		using line_no= vector<string>::size_type ;
		TestQuery(ifstream& pin);
		TestResult  Query(const string& s);
	private:
		shared_ptr<vector<string>> m_Svfile;
		map<string,shared_ptr<set<line_no> > > m_Row;

};

class TestResult
{
	public:
		friend ostream & print(ostream&in,const TestResult & Tresult);
		TestResult(string s,shared_ptr<vector<string>> file,shared_ptr<set<TestQuery::line_no>> fset):f_str(s),f_file(file),f_set(fset){}
	private:
		shared_ptr<vector<string>> f_file;
		shared_ptr<set<TestQuery::line_no>>  f_set;
		string f_str;
};

TestQuery::TestQuery(ifstream & pin):m_Svfile(new vector<string>)
{
	string s;
	while(getline(pin,s))
	{
		m_Svfile->push_back(s);
		istringstream istring(s);
		line_no num=m_Svfile->size();
		string word;
		while(istring>>word)
		{
			auto & ptir =m_Row[word];
			if(!ptir) ptir.reset(new set<line_no>);
			ptir->insert(num);	
		}
	}

}
TestResult TestQuery::Query(const string & s)
{


	static shared_ptr<set<TestQuery::line_no>> TestRe(new set<TestQuery::line_no>);
	auto loc=m_Row.find(s);
	if(loc==m_Row.end()) return TestResult(s,m_Svfile,TestRe);
	else 
	return TestResult(s,m_Svfile,m_Row[s]); 	
}


ostream & print(ostream &os,const TestResult& result)
{
	os<<"find string:["<<result.f_str<<"]  "<<" count:"<<result.f_set->size()<<endl;

	for(auto &a :*result.f_set)
	{
		os<<"["<<a<<"] "<<(*result.f_file)[a-1]<<endl;
	}
	return os;
}

int  main(void)
{
	ifstream f("12_test.txt");
	TestQuery result(f);
	print(cout,result.Query("."));
	return 0;
}
