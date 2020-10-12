#include <iostream>
#include <cstdlib>

#include "NodeTypes.h"
#include "Stack.h"

using namespace std;

// function prototypes for Question 2 from Lab 4

BTNode * createBTNode (int n);

void recPreOrder (BTNode * root);
void recInOrder (BTNode * root);
void recPostOrder (BTNode * root);

// function prototypes for Question 3 from Lab 4

int moment (BTNode * root);
int numOneChild (BTNode * root);
int numNonTerminal (BTNode * root);

// function prototypes for Part 1 of Lab 5

void inOrder (BTNode * root);
void preOrder (BTNode * root);

int main() {
  
	BTNode * root;
	BTNode * node1, * node2, * node3, * node4, * node5;
	
	root = createBTNode (10);
	
	node1 = createBTNode (40);
	node2 = createBTNode (25);	
	node3 = createBTNode (30);
	node4 = createBTNode (50);
	node5 = createBTNode (20);	
		
	root->left = node1;
	root->right = node2;
	
	node1->left = node3;
	node2->left = node4;
	node2->right = node5;
	
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
			
	return 0;
}
    
    
    
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



void inOrder (BTNode * root) {

	// write the code for the non-recursive version of the inorder traversal
	
	Stack * s = initStack ();
	
}



void preOrder (BTNode * root) {

	// write the code for the non-recursive version of the preorder traversal
	
	Stack * s = initStack ();
	
}

