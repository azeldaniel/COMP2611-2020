#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * @struct  Node    Node struct declaration.
 * @var     data    Integer variable to hold data.
 * @var     next    Node pointer variable to hold the address of the next node.
 */
struct Node
{
    int data;
    Node *next;
};

/**
 * @struct  Queue   Queue struct declaration.
 * @var     top     Node pointer to hold the address of the item at the
 *                  top of the stack.
 */
struct Stack
{
    Node *top;
};

/*
 * Function prototypes for the following tasks:
 * 1. Creating a new stack.
 * 2. Pushing a new node onto the stack.
 * 3. Popping the top node from the stack.
 * 4. Determining if the stack is empty.
 * 5. Printing the contents of a stack.
 */
Stack *initStack();
void push(Stack *s, int n);
int pop(Stack *s);
bool isEmpty(Stack *s);
void printStack(Stack *s);

/*
 * Linked list functions used.
 */
Node *createNode(int n);
Node *insertAtHead(Node *top, int n);
Node *deleteAtHead(Node *top);
int size(Node *top);
void printList(Node *top);

/*
 * You are required to uncomment and compile your code after finishing each 
 * question covered in the lab.
 */
int main()
{
    /*

    // 1. Creating a new stack.
    int num;
    Stack *s;
    s = initStack();
    cout << "Stack initialized!" << endl;

    /*

    // 2. Pushing a new node onto the stack.
    push(s, 10);
    push(s, 20);
    push(s, 30);
    cout << "Pushed 3 items (10, 20, 30) onto stack" << endl;
    cout << "Stack: ";
    printStack(s);

    /*

    // 3. Popping the top node from the stack.
    pop(s);
    pop(s);
    cout << "Popped 2 items from stack" << endl;
    cout << "Stack: ";
    printStack(s);

    /*

    // 4. Determining if the stack is empty.
    cout << "Is stack empty?" << endl;
    cout << isEmpty(s) << endl;
    num = pop(s);
    cout << "Popped " << num << " from stack" << endl;
    cout << "Is stack empty?" << endl;
    cout << isEmpty(s) << endl;

    */

    return 0;
}

/**
 * Function that creates a new, empty stack
 * @return          Node pointer to the newly created stack.
 */
Stack *initStack()
{
    Stack *s;

    /* insert code here */

    return s;
}

/**
 * Function that pushes a new node (containing the data in @param `n`) onto a 
 * stack.
 * @param   s       Stack pointer to the stack structure.
 * @param   n       Integer data for node to be inserted.
 */
void push(Stack *s, int n)
{
    /* insert code here */
}

/**
 * Function that pops the data of the node from the top of a stack (if possible)
 * Returns -999 if the stack is empty.
 * @param   s       Stack pointer to the stack structure.
 * @return          Integer variable containing to the new top of the linked list.
 */
int pop(Stack *s)
{
    /* insert code here */

    return 0; // replace as necessary
}

/**
 * Function that determines if a stack is empty or not.
 * @param   s       Stack pointer to the stack structure.
 * @return          Boolean variable containing true if the stack has items or 
 *                  false otherwise.
 */
bool isEmpty(Stack *s)
{
    /* insert code here */

    return false; // replace as necessary
}

/**
 * Function (non-recursive) that prints the content of a stack.
 * @param   s       Stack pointer to the stack structure.
 */
void printStack(Stack *s)
{
    /* insert code here */
}

/*
 * Duplicated code from LinkedList.cpp for convenience.
 */
/* insert code for - Node *createNode(int n) - if necessary */
/* insert code for - Node *insertAtHead(Node *top, int n) - if necessary */
/* insert code for - Node *deleteAtHead(Node *top) - if necessary */
/* insert code for - int size(Node *top) - if necessary */
/* insert code for - void printList(Node *top) - if necessary */
