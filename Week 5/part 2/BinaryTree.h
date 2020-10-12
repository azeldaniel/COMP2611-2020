#ifndef _BINARYTREE_H
#define _BINARYTREE_H

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

#endif
