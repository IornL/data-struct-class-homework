#include<iostream>
#include<queue>
using namespace std;
class CycleQueue
{
public:
	const static unsigned MAXSIZE;
	CycleQueue()
	{
		front = rear = _size = 0;
	}

	~CycleQueue()
	{
		delete[] d;
	}
	void push(int _d) {
		d[rear = (rear + 1) % MAXSIZE] = _d;
		_size++;
	}
	int pop() {
		return d[front = (front + 1) % MAXSIZE];
		_size--;
	}
	unsigned size(){
		return _size;
	}
	bool empty() {
		return front == rear && size() == 0;
	}
private:
	unsigned _size;
	int *d = new int[MAXSIZE];
	unsigned front, rear;
};
const unsigned CycleQueue::MAXSIZE = 10;
int main() {
	CycleQueue c;
	for (int i = 0; i < 5; ++i) {
		c.push(i);
	};
	while (!c.empty())
	{
		cout << c.pop() << " ";
	}
	cout << endl;
	queue<int> q;
	for (int i = 0; i < 5; ++i) {
		q.push(i);
	}
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

}