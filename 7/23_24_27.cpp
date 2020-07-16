#include<iostream>
#include<string>
#include<vector>
class Screen;
class Window_mgr{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
	Window_mgr();
	void get(std::ostream& os);
private:
	std::vector<Screen> screens;	
};


class Screen
{
public:
	typedef std::string::size_type pos;
	//构造函数
	Screen() = default;
	Screen(pos ht,pos wd ):height(ht),width(wd),contents(wd*ht,' '){}
	Screen(pos ht,pos wd ,char c):height(ht),width(wd),contents(wd*ht,c){}	

	double	avg_price();	
	
	Screen& move(pos ht,pos wd){cursor=height+ht*wd;return *this;}
	Screen& set(char c){ contents[cursor]=c;return *this;}
	Screen& set(pos r,pos col,char ch){contents[r*width+col]=ch;return * this;}
	Screen& display(std::ostream &os)
			{do_display(os);return *this;}
	const Screen& display(std::ostream &os)const 
			{do_display(os);return *this;}

	friend void Window_mgr::clear(ScreenIndex );	

	
private:
	void do_display(std::ostream &os)const {os<<contents;}

	pos cursor=0;
	pos height=0,width=0;
	std::string contents;

};

void Window_mgr::get(std::ostream &os)
{
	for(auto & x:screens) 
		x.display(os);
}

Window_mgr::Window_mgr()
{
	 screens.push_back(Screen(5,5,'#'));
}

void Window_mgr::clear(Window_mgr::ScreenIndex i)
{
	Screen &s=screens[i];
	s.contents=std::string(s.height*s.width,' ');
}

double Screen::avg_price()
{
	return 1*0.1;
}	
int main(void)
{
	Screen myScreen(5,5,'x');
	myScreen.display(std::cout);
	std::cout<<std::endl;
	myScreen.move(4,0).set('#').display(std::cout);
	std::cout<<std::endl;
	Window_mgr p;
	p.get(std::cout);
	std::cout<<std::endl;
	p.clear(0);	
	p.get(std::cout);
	
	std::cout<<std::endl;
	
	return 0;
}
