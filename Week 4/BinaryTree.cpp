#include <iostream>
#include <cstdlib>

using namespace std;

struct BTNode
{
	int data;
	BTNode *left;
	BTNode *right;
};

// function prototypes for Question 2

BTNode *createBTNode(int n);
void preOrder(BTNode *root);
void inOrder(BTNode *root);
void postOrder(BTNode *root);

// function prototypes for Question 3

int moment(BTNode *root);
int numOneChild(BTNode *root);
int numNonTerminal(BTNode *root);

int main()
{

	// write declarations here

	// write code to create nodes of the binary tree

	// write code to connect nodes based on diagram given

	// write code to call functions to perform preorder, inorder, and postorder traversals

	// Code to test functions from Question 3. Modify if necessary.

	int num;

	num = moment(root);

	cout << "The amount of nodes in the tree is: " << num << endl;

	num = numOneChild(root);

	cout << "The amount of nodes with exactly one child in the tree is: " << num << endl;

	num = numNonTerminal(root);

	cout << "The amount of nonterminal nodes in the tree is: " << num << endl;

	return 0;
}

BTNode *createBTNode(int data)
{

	return NULL;
}

void preOrder(BTNode *root)
{
}

void inOrder(BTNode *root)
{
}

void postOrder(BTNode *root)
{
}

int moment(BTNode *root)
{

	return 0;
}

int numOneChild(BTNode *root)
{

	return 0;
}

int numNonTerminal(BTNode *root)
{

	return 0;
}
