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

int main()
{

    // Creating a stack
    int num;
    Stack *s;
    s = initStack();
    cout << "Stack initialized!" << endl;

    // Pushing data onto a stack
    push(s, 10);
    push(s, 20);
    push(s, 30);
    cout << "Pushed 3 items (10, 20, 30) onto stack" << endl;
    cout << "Stack: ";
    printStack(s);

    // Popping items from a stack
    pop(s);
    pop(s);
    cout << "Popped 2 items from stack" << endl;
    cout << "Stack: ";
    printStack(s);

    // Checking if a stack is empty
    cout << "Is stack empty?" << endl;
    cout << isEmpty(s) << endl;
    num = pop(s);
    cout << "Popped " << num << " from stack" << endl;
    cout << "Is stack empty?" << endl;
    cout << isEmpty(s) << endl;

    return 0;
}

/**
 * Function that creates a new, empty stack
 * @return          Node pointer to the newly created stack.
 */
Stack *initStack()
{
    Stack *s;

    s = (Stack *)malloc(sizeof(Stack));
    s->top = NULL;

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
    s->top = insertAtHead(s->top, n);
}

/**
 * Function that pops the data of the node from the top of a stack (if possible)
 * Returns -999 if the stack is empty.
 * @param   s       Stack pointer to the stack structure.
 * @return          Integer variable containing to the new top of the linked list.
 */
int pop(Stack *s)
{
    int n;
    Node *top;

    if (size(s->top) == 0) // can alternatively use isEmpty(s) or s->top == NULL
        return -999;

    top = s->top;
    n = top->data;
    s->top = deleteAtHead(s->top);

    return n;
}

/**
 * Function that determines if a stack is empty or not.
 * @param   s       Stack pointer to the stack structure.
 * @return          Boolean variable containing true if the stack has items or 
 *                  false otherwise.
 */
bool isEmpty(Stack *s)
{
    if (s->top == NULL)
        return true;
    else
        return false;

    // can alternatively use return (s->top == NULL);
}

/**
 * Function (non-recursive) that prints the content of a stack.
 * @param   s       Stack pointer to the stack structure.
 */
void printStack(Stack *s)
{
    printList(s->top);
}

/*
 * Duplicated code from LinkedList.cpp for convenience.
 */
Node *createNode(int n)
{
    Node *newNode;

    newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;

    return newNode;
}
Node *insertAtHead(Node *top, int n)
{
    Node *newNode;

    newNode = createNode(n);
    newNode->next = top; // this works even if the list is empty (i.e., top = NULL)
    top = newNode;

    return top; // return pointer to new head of list
}
Node *deleteAtHead(Node *top)
{

    Node *curr;

    curr = top;
    if (top == NULL)
        return NULL;
    else
    {
        curr = top;
        top = top->next;
        free(curr);
        return top;
    }
}
int size(Node *top)
{
    Node *curr;
    int numNodes = 0;

    curr = top;
    while (curr != NULL)
    {
        numNodes = numNodes + 1;
        curr = curr->next;
    }
    return numNodes;
}
void printList(Node *top)
{
    Node *curr;

    curr = top;
    while (curr != NULL)
    {
        cout << curr->data << "\t";
        curr = curr->next;
    }

    cout << "\n";
}