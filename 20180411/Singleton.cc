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

	private:
		Singleton()
		{
			
		}
};
int main()
{
	Singleton s1;
	Singleton s2;
}
