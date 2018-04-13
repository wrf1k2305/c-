 ///
 /// @file    string.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-11 22:13:47
 ///
 
#include <iostream>
using std::cout;
using std::endl;
using std::string;
int main(void)
{
	string str1;
	cout << str1 << endl;

	string str2 = "Hello,world";
	string str3("wangdao");

	cout << str2 << endl;
	cout << str3 << endl;
	string str4 = str3;
	cout << str4 << endl;
	str4 = str2;
	cout << str4 << endl;
	return 0;
}
