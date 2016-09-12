#include<algorithm>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
template <class T>
class MyList {
public:
	Mylist() {
		head = NULL;
	}
	void erase(int _index) {
		auto dist = head;
		for (int i = 0; i < index-1&& dist->next!=NULL; i++)
		{
			dist = dist-> next
		}
	}
	void push(T _data) {
		auto newNode = new node(T)
		if (head == NULL)
			head = newNode;
		else {
			auto tail = head;
			while (tail->next != NULL)
				tail = tail->next;
			tail->next = newNode;
		}
	}
private:
	class node
	{
	public:
		node(T _data)
		{
			data = _data;
			next = NULL;
		}

		~node()
		{
		}
	T data;
	node *next;
	};
	unsigned _length;
	node *head;
};