///
/// @file    Computer.cc
/// @author  wrf1k2305(710162117@qq.com)
/// @date    2018-04-11 15:43:00
///

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Computer
{
	public:
		Computer(const string brand,int price)
		:_brand(brand)
		,_price(price)
		{
			//setBrand(brand);
			//setPrice(price);
		}
		Computer()
		{

		}
		void setBrand(string brand);
		void setPrice(int price);
		void print()
		{
			cout << "brand:" << _brand << endl
				<< "price:" << _price << endl;
		}
		~Computer()
		{
			cout << "~Computer()" << endl;
		}
	private:
		string _brand;
		int _price;
};
void Computer::setBrand(string brand)
{
	_brand = brand;
}
void Computer::setPrice(int price)
{
	_price = price;
}
void test()
{
	Computer cmp("mac",8900);
	cmp.print();
}
int main(void)
{
	/*
	Computer cop1("lenovo",5600);
	Computer cop2;
	cop1.print();
	cop2.setBrand("dell");
	cop2.setPrice(6000);
	cop2.print();
	*/
	test();
	while(1);
	return 0;
}
