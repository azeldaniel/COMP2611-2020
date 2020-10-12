#include <iostream>
#include <cstdlib>

#include "NodeTypes.h"
#include "Stack.h"
#include "BinaryTree.h"

using namespace std;

    
BTNode * createBTNode (int data) {
   BTNode * newNode; 
   
   newNode = new BTNode;
   
   newNode->data = data;
   newNode->left = NULL;
   newNode->right = NULL;
   
   return newNode;
}



void recPreOrder (BTNode * root) {
	
	if (root == NULL)
		return;
		
	cout << root->data << " ";

	recPreOrder (root->left);
	recPreOrder (root->right);
}



void recInOrder (BTNode * root) {
	
	if (root == NULL)
		return;

	recInOrder (root->left);
	
	cout << root->data << " ";
	
	recInOrder (root->right);
}



void recPostOrder (BTNode * root) {
	
	if (root == NULL)
		return;

	recPostOrder (root->left);
	recPostOrder (root->right);
	
	cout << root->data << " ";
}



int moment (BTNode * root) {

	if (root == NULL)
		return 0;
		
	return (1 + moment (root->left) + moment (root->right));
}



int numOneChild (BTNode * root) {

	if (root == NULL)
		return 0;
		
	if (root->left == NULL && root->right == NULL)
		return 0;
	
	if (root->left == NULL)
		return 1 + numOneChild (root->right);
	else
	if (root->right == NULL)
		return 1 + numOneChild (root->left);
	else
		return (numOneChild (root->left) + numOneChild (root->right));
}



int numNonTerminal (BTNode * root) {

	if (root == NULL)
		return 0;
		
	if (root->left == NULL && root->right == NULL)
		return 0;
		
	return (1 + numNonTerminal (root->left) + numNonTerminal (root->right));
}



void preOrder (BTNode * root) {

	Stack * s = initStack ();
	
	// insert code for non-recursive preorder traversal from Part 1
	
}



void inOrder (BTNode * root) {

	Stack * s = initStack ();
	
	// insert code for non-recursive inorder traversal from Part 1

}

