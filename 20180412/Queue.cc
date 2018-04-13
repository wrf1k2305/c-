 ///
 /// @file    Queue.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-12 19:11:45
 ///
 
#include <iostream>
using std::cout;
using std::endl;

/*
 *队尾指针始终指向队尾元素，队首指针始终指向队首元素
 *
 * 
 */
class Queue
{
	public:
		Queue()
		:_front(-1)
		,_back(-1)
		{
		
		}
		void push(int);
		void pop();
		int front();//队首元素
		int back();//队尾元素
		bool empty();//队列为空
		bool full();
	private:
		int _queue[1000];
		int _front;
		int _back;
};

void Queue::push(int x)
{
	if(full())
	{
		return;
	}
	if(empty())
	{
		//若队列为空，同时移动队首队尾
		_queue[++_back] = x;
		++_front;
	}else
	{
		_queue[++_back] = x;
	}
}
void Queue::pop()
{
	//若队列不为空
	if(!empty())
	{
		++_front;//出队
	}

}

int Queue::front()
{
	if(!empty())
	{
		return _queue[_front];	
	}
	return 0;
}

int Queue::back()
{
	if(!empty())
	{
		return _queue[_back];
	}
	return 0;
}

bool Queue::empty()
{
	if(_front>_back||_front == -1)
	{
		cout << "队空" << endl;
		return true;
	}
	else{
		return false;
	}
}
bool Queue::full()
{
	if(_back==999&&_front<=_back)
	{
		cout << "队满" << endl;
		return true;
	}else{
		return false;
	}
}
int main(void)
{
	Queue q;
	q.push(1);
	cout << "队首元素为:" << q.front() << endl
		 << "队尾元素为:" << q.back() << endl;
	q.push(2);
	cout << "队首元素为:" << q.front() << endl
		 << "队尾元素为:" << q.back() << endl;
	q.push(3);
	cout << "队首元素为:" << q.front() << endl
		 << "队尾元素为:" << q.back() << endl;
	q.push(4);
	cout << "队首元素为:" << q.front() << endl
		 << "队尾元素为:" << q.back() << endl;
	q.pop();
	cout << "队首元素为:" << q.front() << endl
		 << "队尾元素为:" << q.back() << endl;
	q.pop();
	cout << "队首元素为:" << q.front() << endl
		 << "队尾元素为:" << q.back() << endl;
	q.pop();
	cout << "队首元素为:" << q.front() << endl
		 << "队尾元素为:" << q.back() << endl;
	q.pop();
	cout << "队首元素为:" << q.front() << endl
		 << "队尾元素为:" << q.back() << endl;

}
