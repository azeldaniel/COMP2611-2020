#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int n);
bool contains(Node *top, int key);
int size(Node *top);
void printList(Node *top);
int sumNodes(Node *top);

Node *buildList();
Node *deleteNode(Node *top);

int main()
{
    /* 1. a. Solution from Melika (Mon) */
    Node *newNode, *top;
    newNode = createNode(10);
    newNode->next = createNode(20);
    newNode->next->next = createNode(30);
    newNode->next->next->next = createNode(50);
    top = newNode; // note that newNode never changed, it still points to 10.

    cout << "(1.a) Added 10, 20, 30, 50 to the linked list" << endl;
    cout << "The list: ";
    printList(top);

    /* 1. a. Alternative Solution by Johnathan (Wed) */
    Node *curr;
    top = createNode(10);
    curr = top;
    newNode = createNode(20);
    curr->next = newNode;
    curr = newNode;
    newNode = createNode(30);
    curr->next = newNode;
    curr = newNode;
    newNode = createNode(50);
    curr->next = newNode;
    curr = newNode;

    cout << "\n(1.a alt) Added 10, 20, 30, 50 to the linked list" << endl;
    cout << "The list: ";
    printList(top);

    /* 1. b. Solution by Sameir (Wed) */
    curr = top->next;
    top->next = top->next->next; // alternatively top->next = curr->next
    free(curr);

    cout << "\n(1.b) Removed second node from the linked list" << endl;
    cout << "The list: ";
    printList(top);

    /* 1. c. Solution by Adrienne (Mon) */
    Node *last;
    curr = top;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    last = curr->next;
    curr->next = createNode(40);
    curr->next->next = last;

    cout << "\n(1.c) Inserted 40 in the second to last position in the linked list" << endl;
    cout << "The list: ";
    printList(top);

    /* 1. c. Solution by Aaron (Wed) */
    curr = top;
    Node *prev = NULL;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    newNode = createNode(40);
    prev->next = newNode;
    newNode->next = curr;

    cout << "\n(1.c alt) Inserted 40 in the second to last position in the linked list" << endl;
    cout << "The list: ";
    printList(top);

    /* 1. d. Solution by Andrei (Wed) */
    curr = top;
    top = top->next;
    free(curr);

    cout << "\n(1.d) Removed first item from the linked list" << endl;
    cout << "The list: ";
    printList(top);

    /* 1. e. */
    int sum = 0;
    sum = sumNodes(top);
    cout << "\n(1.e) The sum of the nodes in the linked list is: " << sum << endl;

    return 0;
}

/* 1. a. Alternative function based solution by Toni-Marie (Wed) */
Node *buildList()
{

    Node *newNode, *last, *top;
    newNode = createNode(10);
    top = newNode;
    last = newNode;

    newNode = createNode(20);
    (*last).next = newNode; //or last->next=newNode
    last = newNode;

    newNode = createNode(30);
    last->next = newNode;
    last = newNode;

    newNode = createNode(50);
    last->next = newNode;
    last = newNode;

    return top;
}

/* 1. b. Alternative function based solution by Johnathan (Wed) */
Node *deleteNode(Node *top)
{
    Node *curr, *temp, *prev;

    //curr = top;
    curr = top->next;
    prev = curr;
    temp = curr->next;

    top->next = temp;

    free(prev);

    return top;
}

/* 1. e. Solutions by Jonathan, Sameir, Aruna and Andrei (Wed) */
int sumNodes(Node *top)
{
    Node *curr;
    int sum = 0;

    /* Addition by Aruna */
    if (top == NULL)
    {
        cout << "List empty. " << endl;
        return 0;
    }

    /* Below by Jonathan, Sameir, Aruna and Andrei */
    curr = top;

    while (curr != NULL)
    {
        sum = sum + curr->data;
        curr = curr->next;
    }

    return sum;
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

bool contains(Node *top, int key)
{

    Node *curr;

    curr = top;
    while (curr != NULL)
    {
        if (curr->data == key)
            return true;
        else
            curr = curr->next;
    }
    return false;
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