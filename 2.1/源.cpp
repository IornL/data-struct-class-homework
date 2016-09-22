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
int main() {
	auto s1 = new ArrayStack();
	for (int i = 1; i <= 5; ++i) {
		s1->push(i);
	}
	while (!s1->empty()) {
		cout << s1->pop() << " ";
	}

}