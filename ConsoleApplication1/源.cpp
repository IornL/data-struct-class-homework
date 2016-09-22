//#include<algorithm>
//#include<iostream>
//using std::cout;
//using std::cin;
//using std::endl;
//template <class T>
//class MyList {
//public:
//	Mylist() {
//		head = NULL;
//	}
//	void erase(int _index) {
//		auto dist = head;
//		for (int i = 0; i < index-1&& dist->next!=NULL; i++)
//		{
//			dist = dist-> next
//		}
//	}
//	node* begin(){
//		return head
//	}
//	void push(T _data) {
//		auto newNode = new node(T)
//		if (head == NULL)
//			head = newNode;
//		else {
//			auto tail = head;
//			while (tail->next != NULL)
//				tail = tail->next;
//			tail->next = newNode;
//		}
//	}
//private:
//	class node
//	{
//	public:
//		node(T _data)
//		{
//			data = _data;
//			next = NULL;
//		}
//
//		~node()
//		{
//		}
//	T data;
//	node *next;
//	};
//	unsigned _length;
//	node *head;
//};
//int main(){
//	auto l1 = new MyList<int>();
//	auto l2 = new MyList<int>();
//	for (int i = 1; i <= 10; ++i)
//		l1->push(i);
//	auto p = l1->begin();
//	while(p){
//		if (p->data % 2 == 0)
//		p = p->next;
//	}
//}
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main() {
	list<int> l1;
	list<int> l2;
	for (int i = 1; i <= 10; ++i)
		l1.push_back(i);
	for (list<int>::iterator i = l1.begin(); i != l1.end(); ++i)
		if (*i % 2) {
			l2.push_back(*i);
			l1.erase(i);
		}
	for_each(l1.begin(), l1.end(), [](int i) {cout << i << " "; });
	cout << endl;
	for_each(l2.begin(), l2.end(), [](int i) {cout << i << " "; });
	cout << endl;
}