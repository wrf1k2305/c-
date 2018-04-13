 ///
 /// @file    Computer2.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-11 19:50:44
 ///
#include <stdio.h> 
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Computer
{
	public:
		Computer(const char * brand, float price)
		:_brand(new char[strlen(brand)+1]())
		,_price(price)
		{
			strcpy(_brand,brand);
			cout << "Computer(const char*,float)" << endl;
		}
		void print()
		{
			cout << "brand:" << _brand << endl
				 << "price:" << _price << endl;
		}
		//自己的拷贝构造函数
		Computer(const Computer & rhs)
		:_brand(new char[strlen(rhs._brand)+1]())
		,_price(rhs._price)
		{
			cout << "拷贝构造函数" << endl;
		}
		~Computer()
		{
			cout << "~Computer()" << endl;
		}
		void setPrice(float price)
		{
		//	_brand = new char[strlen(brand)+1];
		//	strcpy(_brand,brand);
			_price = price;
		}
	private:
		char* _brand;
		float _price;
};
void test0()
{
	//测试构造函数
	Computer cmp("lenovo",5600);
	cmp.print();
}
void test1()
{
	//显示调用拷贝构造函数
	Computer com1("xiaomi",6666);
	Computer com2 = com1;//这句会调用拷贝构造函数
	com2.print();
}
Computer getComputer()
{
	Computer cpm("asus",4999);
	printf("cpm address = %p\n",&cpm);
	return cpm;
}
void test2()
{
	//隐式调用拷贝构造函数
	Computer temp = getComputer();//会调用拷贝构造函数
	temp.print();
	printf("temp address = %p\n",&temp);
	cout << "test2()" << endl;
}
void test3()
{
	Computer m("mac",10000);
	cout << "m:" << endl;
	m.print();
	Computer f = m;
	f.setPrice(6900);
	cout << "f:" << endl;
	f.print();
	cout << "m:" << endl;
	m.print();
	
}
int main(void)
{
	//test0();
	//test1();
	//test2();
	//test3();
	Computer p("mac",1000);
	Computer p2 = p;
	p2.print();
	return 0;
}
