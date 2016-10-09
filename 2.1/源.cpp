#include<iostream>
#include<algorithm>
using namespace std;
class ArrayStack {
public:
	static unsigned MAXLENTH;
	ArrayStack() {
		d = new int[MAXLENTH];
		top = -1;
	};
	bool empty() {
		return top == -1;
	}
	void push(int _) {
		d[++top] = _;
	}
	int pop() {
		if (!empty()) {
			return(d[top--]);
		}
	}
private:
	int * d;
	int top;
};
unsigned ArrayStack::MAXLENTH = 40;
class LinkStack
{
public:
	LinkStack()
	{
		_top = NULL;
		_size = 0;
	}

	~LinkStack()
	{
		//TODO free nodes' memory
	}
	unsigned size() {
		return _size;
	}
	bool empty() {
		return size() == 0;
	}
	void push(int _in){
		auto newNode = new Node(_in);
		if(_top != nullptr){
			newNode->next = _top;
			_top = newNode;
		}
		else
		{
			_top = newNode;
		}
		
		++_size;
	}
	int pop() {
		auto t = _top;
		int returnValue = _top->data;
		_top = _top->next;
		delete t;
		--_size;
		return returnValue;
	}

private:
	class Node
	{
	public:
		Node(int _d)
		{
			data = _d;
			next = nullptr;
		}

		~Node()
		{
		}
		int data;
		Node *next;
	};
	Node *_top;
	unsigned _size;

};

int main() {
	auto s1 = new ArrayStack();
	for (int i = 1; i <= 5; ++i) {
		s1->push(i);
	}
	while (!s1->empty()) {
		cout << s1->pop() << " ";
	}
	auto s2 = new LinkStack();
	for (int i = 1; i <= 5; ++i) {
		s2->push(i);
	}
	cout << endl;
	while (!s2->empty()) {
		cout << s2->pop() << " ";
	}
}