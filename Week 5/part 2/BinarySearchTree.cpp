#include <iostream>
#include <cstdlib>

#include "NodeTypes.h"
#include "Stack.h"
#include "BinaryTree.h"

using namespace std;

// function prototypes for Part 2 of Lab 5

BTNode * treeSearch (BTNode * root, int key);
BTNode * treeMinimum (BTNode * root);
BTNode * treeMaximum (BTNode * root);

int main() {
  
	BTNode * root;
	BTNode * node1, * node2, * node3, * node4, * node5, * node6;
	BTNode * node7, * node8, * node9, * node10, * node11;
	
	// write code to create the BST from Figure 1
	
	node1 = createBTNode (15);
	
	root = node1;
	
	// code to test binary tree and BST functions
	
	cout << "Preorder traversal (recursive): ";
	recPreOrder (root);
	cout << endl << endl;

	cout << "Preorder traversal (non-recursive): ";
	preOrder (root);
	cout << endl << endl;
	
	cout << "Inorder traversal (recursive): ";
	recInOrder (root);
	cout << endl << endl;	

	cout << "Inorder traversal (non-recursive): ";
	inOrder (root);
	cout << endl << endl;
		
	cout << "Postorder traversal: ";
	recPostOrder (root);
	cout << endl << endl;
	
	int num;
	
	num = moment (root);
	
	cout << "The amount of nodes in the tree is: " << num << endl;

	num = numOneChild (root);
	
	cout << "The amount of nodes with exactly one child in the tree is: " << num << endl;

	num = numNonTerminal (root);
	
	cout << "The amount of nonterminal nodes in the tree is: " << num << endl;	
			
	BTNode * found, * min, * max;
	int key = 17;
	
	// The following code is used to test the functions in Part 2
	
	found = treeSearch (root, key);
	if (found != NULL)
		cout << key << " found in BST." << endl;
	else
		cout << key << " NOT found in BST." << endl;
				
	min = treeMinimum (root);
	max = treeMaximum (root);
	
	if (min != NULL && max != NULL) {
		cout << "The minimum value in the BST is: " << min->data << endl;
		cout << "The maximum value in the BST is: " << max->data << endl;
	}
	
	return 0;
}


BTNode * treeSearch (BTNode * root, int key) {

	return NULL;
}



BTNode * treeMinimum (BTNode * root) {
	
	return root;
}



BTNode * treeMaximum (BTNode * root) {

	return root;
}
