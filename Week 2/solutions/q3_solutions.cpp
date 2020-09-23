#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Stack
{
    Node *top;
};

Stack *initStack();
void push(Stack *s, int n);
int pop(Stack *s);
bool isEmpty(Stack *s);
void printStack(Stack *s);

Node *createNode(int n);
Node *insertAtHead(Node *top, int n);
Node *deleteAtHead(Node *top);
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
    cout << "\nPushed 3 items (10, 20, 30) onto stack" << endl;
    cout << "Stack: ";
    printStack(s);

    // Popping items from a stack
    pop(s);
    pop(s);
    cout << "\nPopped 2 items from stack" << endl;
    cout << "Stack: ";
    printStack(s);

    // Checking if a stack is empty
    cout << "\nIs stack empty?" << endl;
    cout << isEmpty(s) << endl;
    num = pop(s);
    cout << "\nPopped " << num << " from stack" << endl;
    cout << "Is stack empty?" << endl;
    cout << isEmpty(s) << endl;

    return 0;
}

Stack *initStack()
{
    Stack *s;

    s = (Stack *)malloc(sizeof(Stack));
    s->top = NULL;

    return s;
}

/* Solution by Brandon (Wed) */
void push(Stack *s, int n)
{
    s->top = insertAtHead(s->top, n);
}

/* Solution by Brandon (Wed) */
int pop(Stack *s)
{
    if (s->top == NULL) // alternatively call isEmpty
    {
        cout << "Stack is empty" << endl;
        return -999;
    }
    else
    {
        int n = s->top->data;
        s->top = deleteAtHead(s->top);
        return n;
    }
}

/* Solution by Brandon (Wed) */
bool isEmpty(Stack *s)
{
    if (s->top == NULL)
        return true;
    return false;
}

/* Solution by Brandon (Wed) */
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