#include<iostream>
#include<string>
#include<vector>
#include<memory>

using namespace std;
class strBol;
class strBolPtr{
	public:
		strBolPtr():curr(0){}
		strBolPtr(strBol &a ,size_t sz=0);
		std::string & deref()const 
		{
			auto p=check(curr,"dereference past end"	);
			return (*p)[curr];
		}
		strBolPtr& incr()
		{
			check(curr,"increment past end of strBolPtr");
			++curr;
			return *this;
		}
		void print(ostream & os )
		{
			for(curr=0;curr!=wptr.lock()->size();++curr)
			{
				os<<deref()<<"  ";

			}
		}
	private:
		std::shared_ptr<std::vector<std::string>>
			check(std::size_t i,const std::string& msg) const
			{
				auto ret=wptr.lock();
				if(!ret) throw std::runtime_error("unbound strBolPtr");	
				if(i>=ret->size()) throw std::out_of_range(msg);
				return ret;
			}


		std::weak_ptr<std::vector<std::string>> wptr;
		std::size_t curr;
};


class strBol
{
	public:
		friend class strBolPtr;
		strBol():data(make_shared<vector<string>>()){}
		strBol(initializer_list <string> li):data(make_shared<vector<string> > (li)){}

		const string & front()const {check(0,"return front error!"); return data->front();}
		string & front(){check(0,"return front error!"); return data->front();}

		const string & back()const {check(0,"return back error!");  return data->back();}
		string & back(){check(0,"return back error!");  return data->back();}


		bool     push_back(const string & a){data->push_back(a);}

		void     pop_back(){check(0,"pop_back error!"); data->pop_back();}
		void     print(){for(const auto & a : *data) cout<<a<<" ";cout<<endl;}

		strBolPtr begin(){return strBolPtr(*this);}
		strBolPtr end(){ auto ret=strBolPtr(*this,data->size());return ret;};


	private:
		shared_ptr<vector<string> > data;
		void check(vector<string>::size_type i,const string &msg) const{if(i>=data->size()) throw out_of_range(msg);}
};

strBolPtr::strBolPtr(strBol &a ,size_t sz):wptr(a.data),curr(sz){}

int main(void)
{
	strBol b1{"aaab","bbbbc","cccccd"};	
	b1.print();


	strBolPtr t(b1);
	cout<<t.deref()<<endl;

	t.print(cout);
	return 0;

}
