#include<algorithm>
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
template <class T>
class MyArray
{
public:
	unsigned size() {
		return length;
	};
	T erase(int _index) {
		T returnValue = data[_index];
		for (int i = _index; i < length; ++i) {
			data[i] = data[i + 1];
		}
		--length;
		return returnValue;
	};
	MyArray();
	MyArray(unsigned _length) {
		data = new T[_length];
		length = _length;
	};
	~MyArray() {
		delete[] data;
	};
	T& operator [] (unsigned _index) {
		return data[_index];
	};
private:
	T *data;
	unsigned length;
};
int main() {
	MyArray<int> a(9);
	for (int i = 1; i <= 10; i++)
	{
		a[i-1] = i;
	}
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << endl;
	}
	a.erase(5);
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] <<endl;
	}
}