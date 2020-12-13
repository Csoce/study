#include<memory>
using namespace std;

class String{
	public:
		String():element(nullptr),first_free(nullptr),cap(nullptr){};
		String(char * s):element(nullptr),first_free(nullptr),cap(nullptr)
		{
			alloc.construct(element++,s);
		}
		void reallocate();
		void push_back(char * s)
		{
			reallocate();		
		}	
	private:
		void free()
		{
			if(element)
			{
				for(auto p=first_free;p!=element;)
					alloc.destroy(--p);
				alloc.deallocate(element,cap-element);
			}
		}
		allocator<char*> alloc;
		char ** element;
		char ** first_free;
		char ** cap;
};
void String::reallocate()
{
	size_t freesze=first_free-element;
	size_t allsze=cap-element;
	if(freesze=allsze)
	{
		auto newcapacity=freesze?2*freesze:1;
		auto newdata=alloc.allocate(newcapacity);
		auto dest=newdata;
		auto elem=element;
		for(size_t i =0;i!=freesze;++i)
			alloc.construct(dest++,std::move(*elem++));
		free();
		element=newdata;
		first_free=dest;
		cap=element+newcapacity;
	}

}

int main(void)
{
	char pr[10]="123";
	String p;
	p.push_back(pr);
	return 0;
}
