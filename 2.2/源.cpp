#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
struct DataType
{
	char taskName[10];
	int taskNo;

};
int main() {
	stack<DataType> s;
	for(int i = 0; i <5; ++i){
		DataType d;
		sprintf(d.taskName,"task%d", i);
		d.taskNo = i;
		s.push(d);
	}
	while (!s.empty()) {
		auto t = s.top();
		s.pop();
		printf("task's name:%s\ntaskNo.:%d\n", t.taskName, t.taskNo);
	}
}
