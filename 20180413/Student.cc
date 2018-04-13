 ///
 /// @file    Student.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-13 10:44:12
 ///
 
#include <stdlib.h>
#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Student
{
	public:
		Student(const char * name,int age)
		:_name(new char[strlen(name)+1]())
		,_age(age)
		{
			strcpy(_name,name);
			cout << "Student(char *,int)" << endl;
		}
		void * operator new(size_t size)
		{
			cout << "operator new" << endl;
			void * ret = malloc(size);//申请内存空间
			return ret;
		}
		void operator delete(void * ret)
		{
			cout << "operator delete" << endl;
			free(ret);
		}
		~Student()
		{
			cout << "~Student" << endl;
			delete [] _name;
		}
	private:
		char *_name;
		int _age;
};
int main()
{
	Student *  student = new Student("Fred",24);
	delete student;
}
