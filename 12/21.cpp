#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<memory>

using namespace std;
class strBol;
class conststrBolPtr{
	public:
		conststrBolPtr():curr(0){}
		conststrBolPtr(const strBol &a ,size_t sz=0);
		std::string & deref()const 
		{
			auto p=check(curr,"dereference past end"	);
			return (*p)[curr];
		}
		conststrBolPtr& incr()
		{
			check(curr,"increment past end of conststrBolPtr");
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
				if(!ret) throw std::runtime_error("unbound conststrBolPtr");	
				if(i>=ret->size()) throw std::out_of_range(msg);
				return ret;
			}


		std::weak_ptr<std::vector<std::string>> wptr;
		std::size_t curr;
};


class strBol
{
	public:
		friend class conststrBolPtr;
		strBol():data(make_shared<vector<string>>()){}
		strBol(initializer_list <string> li):data(make_shared<vector<string> > (li)){}

		const string & front()const {check(0,"return front error!"); return data->front();}
		string & front(){check(0,"return front error!"); return data->front();}

		const string & back()const {check(0,"return back error!");  return data->back();}
		string & back(){check(0,"return back error!");  return data->back();}


		bool     push_back(const string & a){data->push_back(a);}

		void     pop_back(){check(0,"pop_back error!"); data->pop_back();}
		void     print(){for(const auto & a : *data) cout<<a<<" ";cout<<endl;}

		conststrBolPtr begin(){return conststrBolPtr(*this);}
		conststrBolPtr end(){ auto ret=conststrBolPtr(*this,data->size());return ret;};


	private:
		shared_ptr<vector<string> > data;
		void check(vector<string>::size_type i,const string &msg) const{if(i>=data->size()) throw out_of_range(msg);}
};

conststrBolPtr::conststrBolPtr(const strBol &a ,size_t sz):wptr(a.data),curr(sz){}

int main(void)
{
	const strBol 	strb({"131313131313131313131313","321","sf"});

	conststrBolPtr t(strb);

	t.print(cout);
	return 0;

}
