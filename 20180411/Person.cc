 ///
 /// @file    Person.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-11 21:11:26
 ///
#include <string.h> 
#include <stdio.h>
#include <iostream>
using std::cout;
using std::endl;

class Person
{
public:
	Person(const char * pN)
	{
		p_name = new char [strlen(pN)+1]();
		if(NULL != p_name)
		{
			strcpy(p_name,pN);
		}
	}
/*	Person(const Person & p)//系统默认拷贝构造函数
	{
		p_name = p.p_name;
	}
*/
	Person(const Person & p)
	{
		p_name = new char[strlen(p.p_name)+1]();
		strcpy(p_name,p.p_name);
		cout << "拷贝构造函数调用." << endl;
	}
	~Person()//系统默认拷贝构造函数为值传递，即man和woman的名字指向同一个字面值，delete会回收两次，所以程序崩溃
	{
		//delete p_name;
	}
private:
	char * p_name;
};

int main(void)
{
	Person man("lujun");
	Person woman = man;//会调用拷贝构造函数
	printf("man address = %p\n",&man);
	printf("woman address = %p\n",&woman);
	Person child("child");
	woman =child;//不会调用拷贝构造函数
	printf("woman address = %p",&woman);
	printf("child address = %p",&child);
	return 0;
}






