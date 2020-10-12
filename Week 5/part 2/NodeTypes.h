#ifndef _NODETYPES_H
#define _NODETYPES_H

struct BTNode {
	int data;
	BTNode * left;
	BTNode * right;
};

struct Node {
	BTNode * data;
	Node * next;	
};

#endif
