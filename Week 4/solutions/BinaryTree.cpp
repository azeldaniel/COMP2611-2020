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
int numOneChild2(BTNode *root);
int numNonTerminal(BTNode *root);
int numNonTerminal2(BTNode *root);

int main()
{

	// write declarations here
	BTNode *root;
	BTNode *node40, *node25, *node30, *node50, *node20;

	// write code to create nodes of the binary tree
	root = createBTNode(10);
	node40 = createBTNode(40);
	node25 = createBTNode(25);
	node30 = createBTNode(30);
	node50 = createBTNode(50);
	node20 = createBTNode(20);

	// write code to connect nodes based on diagram given
	root->left = node40;
	root->right = node25;

	node40->left = node30;

	node25->left = node50;
	node25->right = node20;

	// write code to call functions to perform preorder, inorder, and postorder traversals
	cout << "Preorder traversal:" << endl;
	preOrder(root);
	cout << endl;

	cout << "Inorder traversal:" << endl;
	inOrder(root);
	cout << endl;

	cout << "Postorder traversal:" << endl;
	postOrder(root);
	cout << endl;

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
	BTNode *newNode;

	newNode = new BTNode;
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

void preOrder(BTNode *root)
{
	if (root == NULL)
		return;

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void inOrder(BTNode *root)
{
	if (root == NULL)
		return;

	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void postOrder(BTNode *root)
{
	if (root == NULL)
		return;

	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int moment(BTNode *root)
{
	if (root == NULL)
		return 0;

	return (1 + moment(root->left) + moment(root->right));
}

int numOneChild(BTNode *root)
{
	if (root == NULL) // if tree is empty
		return 0;

	if (root->left == NULL && root->right == NULL) // if node is terminal
		return 0;

	if (root->left == NULL) // if right exists but not left
		return 1 + numOneChild(root->right);
	else
	{
		if (root->right == NULL) // if left exists but not right
			return 1 + numOneChild(root->left);
		else
			return numOneChild(root->left) + numOneChild(root->right); // both right and left exist
	}

	return 0;
}

/* Alternative solution by Carson (Mon) */
int numOneChild2(BTNode *root)
{
	if (root == NULL)
	{
		return 0;
	}
	if ((root->left != NULL && root->right == NULL) || (root->left == NULL && root->right != NULL))
	{
		return (1 + numOneChild2(root->left) + numOneChild2(root->right));
	}
	else if (root->left != NULL && root->right != NULL)
	{
		return (0 + numOneChild2(root->left) + numOneChild2(root->right));
	}
	else
	{
		return 0;
	}
}

/* Alternative solution by Andrei (Wed) */
int numOneChild3(BTNode *root)
{
	if ((root == NULL) || (root->left == NULL && root->right == NULL)) // empty tree or no children
		return 0;

	if ((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL)) // only one child
		return 1 + numOneChild3(root->left) + numOneChild3(root->right);

	else // two children
		return numOneChild3(root->left) + numOneChild3(root->right);
}

int numNonTerminal(BTNode *root)
{
	if (root == NULL) // tree is empty
		return 0;
	if (root->left == NULL && root->right == NULL) // if node is terminal
		return 0;
	return (1 + numNonTerminal(root->left) + numNonTerminal(root->right)); // if node is non-terminal
}

/* Solution by Andrei */
int numNonTerminal2(BTNode *root)
{
	if (root == NULL || (root->left == NULL && root->right == NULL)) // empty tree or no children (or non existent child)
		return 0;

	return 1 + numNonTerminal2(root->left) + numNonTerminal2(root->right);
}