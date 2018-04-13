 ///
 /// @file    Stack.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-12 17:11:11
 ///
 
#include <iostream>
using std::cout;
using std::endl;

class Stack
{
	public:
		void push(int);
		void pop();
		int	top();
		bool empty();
		bool full();
		Stack()
		:_top(-1)
		{
		
		}
	private:
		int _stack[10];
		int _top;
};

void Stack::push(int x)//入栈
{
	if(!this->full())
		this->_stack[++_top] = x; 
}
void Stack::pop()
{
	if(!this->empty())
		this->_stack[_top--];
}
int Stack::top()
{
	if(!this->empty())
		return this->_stack[this->_top];
	else
	{
		cout << "栈空" << endl;
		return 0;
	}
}
bool Stack::empty()
{
	if(this->_top==-1)
		return true;
	else
		return false;
}
bool Stack::full()
{
	if(this->_top == 9)
		return true;
	else
		return false;
}
int main(void)
{
	Stack stack;
	stack.push(10);
	cout << "top value" << stack.top() << endl;
	stack.push(12);
	cout << "top value" << stack.top() << endl;
	stack.push(14);
	cout << "top value" << stack.top() << endl;
	stack.pop();//12,10
	cout << "top value" << stack.top() << endl;
	stack.pop();//10
	cout << "top value" << stack.top() << endl;
	stack.pop();//
	cout << "top value" << stack.top() << endl;
	cout << "top empty" << stack.empty() << endl;
}
