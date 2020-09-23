#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

// function prototypes

Node *createNode(int n);
bool contains(Node *top, int key);
int size(Node *top);
void printList(Node *top);
int sumNodes(Node *top);

int main()
{

    int sum = 0;

    cout << "The sum of the nodes in the linked list is: " << sum << endl;

    return 0;
}

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

int sumNodes(Node *top)
{
    Node *curr;
    int sum = 0;

    // write code here for sumNodes

    return sum;
}