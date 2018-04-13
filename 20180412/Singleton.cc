 ///
 /// @file    Singleton.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-12 16:37:01
 ///
 
#include <iostream>
using std::cout;
using std::endl;

//内存中只有一个对象
class Singleton
{	
	public:
		static Singleton * getInstance()
		{
			if(_ps == NULL)
			{
				_ps = new Singleton;
			}
			return _ps;
		}
		static void  destory()
		{
			delete _ps;
		}
	private:
		Singleton()
		{
			
		}
		~Singleton()
		{
			cout << "析构" << endl;
		}
	private:
		static Singleton * _ps;
};
Singleton * Singleton:: _ps = NULL;
int main()
{
	Singleton * s1 = Singleton::getInstance();
	Singleton * s2 = Singleton::getInstance();
	cout << "s1 " << s1 << endl;
	cout << "s2 " << s2 << endl;
	Singleton::destory();
	//delete s1;
}
