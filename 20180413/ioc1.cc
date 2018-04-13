 ///
 /// @file    ioc1.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-13 14:17:06
 ///
#include <string> 
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;
void printStreamStatus()
{
	cout << "cin's badbit" << cin.bad() << endl;
	cout << "cin's failbit" << cin.fail() << endl;
	cout << "cin's eofbit" << cin.eof() << endl;
	cout << "cin's goodbit" << cin.good() << endl;
	cout << "cout's goodbit" << cout.good() << endl;
}

void test0(void)
{
	printStreamStatus();
	int a;
	while(cin >> a)
	{
		cout << "a = " << a << endl;
	}
	printStreamStatus();
	cin.clear();//重置流的状态
	cin.ignore(1024,'\n');//清空输入流缓冲区
	char s[128]={0};
	cin >> s ;
	cout << s << endl;
	printStreamStatus();
}

void test1()
{
	string s;
	while(std::getline(cin,s))
	{
		cout << "s = " << s << endl;
	}
}
int main(void)
{
	test0();

	return 0;
}
