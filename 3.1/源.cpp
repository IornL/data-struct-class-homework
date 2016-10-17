#include<iostream>
#include<queue>
#include<algorithm>
#include<cstdlib>
#include<ctime>
using namespace std;
typedef int dataType;
#define NODE_PLACE int
#define LEFT 10000
#define RIGHT 10001


class TreeNode
{
public:
	TreeNode(dataType _data)
	{
		data = _data;
		leftChild = rightChild = nullptr;
	}

	~TreeNode()
	{
	}
	TreeNode *leftChild, *rightChild;
	dataType data;
};

void addNode(TreeNode *t,NODE_PLACE place) {
	if (place == LEFT) {
		t->leftChild = new TreeNode(rand());
	}
	else
	{
		t->rightChild = new TreeNode(rand());
	}
}

void preOrder(TreeNode *t) {
	cout << t->data << " ";
	if (t->leftChild != nullptr)
		preOrder(t->leftChild);
	if (t->rightChild != nullptr)
		preOrder(t->rightChild);
}

void inOrder(TreeNode *t) {
	
	if (t->leftChild != nullptr)
		inOrder(t->leftChild);
	cout << t->data << " ";
	if (t->rightChild != nullptr)
		inOrder(t->rightChild);
}

void postOrder(TreeNode *t) {

	if (t->leftChild != nullptr)
		postOrder(t->leftChild);
	if (t->rightChild != nullptr)
		postOrder(t->rightChild);
	cout << t->data<<" ";
}

void layerOrder(TreeNode *t){
	queue<TreeNode*> q;
	q.push(t);
	while (!q.empty())
	{
		auto front = q.front();
		q.pop();
		cout << front->data<<" ";
		if (front->leftChild != nullptr)
			q.push(front->leftChild);
		if (front->rightChild != nullptr)
			q.push(front->rightChild);
	}
}
int main() {
	srand((unsigned int)(time(NULL)));
	auto root = new TreeNode(rand());
	addNode(root, LEFT);
	addNode(root, RIGHT);

	addNode(root->leftChild, LEFT);
	addNode(root->leftChild, RIGHT);

	addNode(root->rightChild, LEFT);
	addNode(root->rightChild, RIGHT);

	addNode(root->leftChild->leftChild, LEFT);
	addNode(root->leftChild->rightChild, RIGHT);

	addNode(root->rightChild->leftChild, LEFT);
	addNode(root->rightChild->rightChild, RIGHT);
	cout << "前序遍历:" << endl;
	preOrder(root);
	cout << endl << "中序遍历：" << endl;
	inOrder(root);
	cout << endl << "后序遍历：" << endl;
	postOrder(root);
	cout << endl << "层序遍历：" << endl;
	layerOrder(root);
	cout << endl;
	system("pause");
}
