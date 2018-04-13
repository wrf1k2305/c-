 ///
 /// @file    ForQueue.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-12 20:40:24
 ///
 
#include <iostream>
using std::cout;
using std::endl;

const int QueueSize = 7;
class CirQueue
{
	public:
		CirQueue()
		{
			front=rear=0;
		}
		~CirQueue()
		{
			cout << "destory" << endl;
		}
		void EnQueue(int);//入队
		int DeQueue();//出队
		int GetQueue();//获取队头元素
	private:
		int data[QueueSize];
		int front,rear;
};
void CirQueue::EnQueue(int x)
{
	if((rear+1)%QueueSize == front)
	{
		cout << "Queue is full!" << endl;
	}else{
		//先移动指针再存元素
		rear =(rear + 1)%QueueSize;
		data[rear] = x;
	}
}
int CirQueue::DeQueue()
{
	//先移动指针再取出元素
	if(rear==front)
	{
		cout << "Queue is empty." << endl;
		return -1;
	}else{
		front = (front+1)%QueueSize;
		return data[front];
	}
}
int CirQueue::GetQueue()
{
	if(rear==front)
	{
		cout << "Queue is empty" << endl;
		return -1;
	}else{
		return data[front+1];
	}
}

int main()
{
	CirQueue queue;
	queue.EnQueue(12);
	queue.EnQueue(14);
	queue.EnQueue(16);
	cout << "队列中元素为:";
	for(int i = 1; i <= 3;++ i)
	{
		cout << queue.GetQueue() << ", ";
		queue.DeQueue();
	}
	cout << endl;
}

