 ///
 /// @file    mystring.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-11 21:46:40
 ///
 ///
 ///
#include <stdlib.h>
#include <string.h> 
#include <stdio.h>
#include <iostream>

using std::cout;
using std::endl;


class String
{
public:
    String()
	{
	   	_pstr =(char*)malloc(2);
	  	strcpy(_pstr," ");
	}
	String(const char*pstr)
	:_pstr( new char[strlen(pstr)+1]())
	{		

		strcpy(_pstr,pstr);
	}
	String(const String & rhs)//拷贝构造函数
	:_pstr( new char[strlen(rhs._pstr)+1]())
	{
		//_pstr = new char[strlen(rhs._pstr)+1]();
		strcpy(_pstr,rhs._pstr);
		cout << "copy" << endl;
	}
	String & operator=(const String & rhs)//运算符重载函数
	{
		if(this != &rhs)
		{
			delete [] this->_pstr;
			this->_pstr = new char[strlen(rhs._pstr)+1]();
			strcpy(this->_pstr,"wrf");
			cout << "=操作" << endl;
		}
		return *this;
	}
	
	~String()
	{		
		delete [] _pstr;
	}	
	void print();
private:
	char * _pstr;
};

void String::print()
{
	if(_pstr)
	 cout << _pstr << endl;
	else
	 cout << endl;
}

int main(void)
{
	
//	String str1;
//	str1.print();

	String str2 = "Hello,world";//没有调用拷贝构造函数?
	
//	String str3("wangdao");
	str2.print();
//	str3.print();
	
//	String str4 = str3;//调用了拷贝构造函数
//	str4.print();
//	str4 = str2;//浅拷贝,调用了=运算符
//	str4.print();
	
	return 0;
}
