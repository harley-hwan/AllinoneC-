#include <iostream>

using namespace std;

struct Node
{
	int value;
	Node* left;
	Node* right;
};

void visit(Node* root)
{
	if (root == nullptr)
		return;
	
	//cout << root->value << endl;
	//visit(root->left);
	//visit(root->right);

	//in-order
	visit(root->left);
	cout << root->value << endl;
	visit(root->right);

	//post-order
	//visit(root->left);
	//visit(root->right);
	//cout << root->value << endl;
	
}

int fib(int n)
{
	if (n <= 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}

int fac(int n)
{
	if (n == 1)
		return 1;
	return n * fac(n - 1);
}

void count(int n)
{
	if (n < 0)
		return;
	cout << "Count   : " << n << endl;
	count(n - 1);
	cout << "Started : " << n << endl;
}

int main()
{
	count(5);
	
	// fac()
	// a(n) = n * a(n - 1)
	// a(1) = 1
	// 1 * 2 * 3 * 4 * 5 = 120
	cout << fac(5) << endl;

	// fib()
	// a(n) = a(n - 1) + a(n - 2)
	// a(0) = 1, a(1) = 1
	// 1, 1, 2, 3, 5, 8
	cout << fib(5) << endl;

	// Node
	Node node0{ 0 };
	Node node1{ 1 };
	Node node2{ 2 };
	Node node3{ 3 };
	Node node4{ 4 };
	Node node5{ 5 };
	Node node6{ 6 };
	Node node7{ 7 };
	Node node8{ 8 };
	Node node9{ 9 };

	node0.left = &node1;
	node1.left = &node2;
	node1.right = &node3;
	node3.right = &node4;
	node0.right = &node5;
	node5.left = &node6;
	node6.right = &node7;
	node5.right = &node8;
	node8.left = &node9;

	visit(&node0);
}


//		         n0
//	      n1            n5
//    n2      n3    n6      n8
//	        n4        n7  n9