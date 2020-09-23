#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct Queue
{
    Node *head;
    Node *tail;
};

Queue *initQueue();
void enqueue(Queue *q, int n);
int dequeue(Queue *q);
int peek(Queue *q);

Node *createNode(int n);
void printList(Node *top);

int main()
{
    // Creating a queue
    int num;
    Queue *q;
    q = initQueue();
    cout << "Queue initialized!" << endl;

    // Enqueue data onto a queue
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    cout << "\nEnqueued 3 items (10, 20, 30) onto queue" << endl;
    cout << "Queue: ";
    printList(q->head);

    // Popping items from a stack
    dequeue(q);
    dequeue(q);
    cout << "\nDequeued 2 items from stack" << endl;
    cout << "Stack: ";
    printList(q->head);

    // Checking if a stack is empty
    cout << "\nWhat is at the front of the queue?" << endl;
    cout << peek(q) << endl;
    num = dequeue(q);
    cout << "\nDequeued " << num << " from queue" << endl;
    cout << "What is at the front of the queue?" << endl;
    cout << peek(q) << endl;

    return 0;
}

/* Solution by Brandon */
Queue *initQueue()
{
    Queue *q = new Queue;
    q->head = NULL;
    q->tail = NULL;

    return q;
}

void enqueue(Queue *q, int n)
{
    /* insert code here */
    Node *newNode = createNode(n);
    if (q->head == NULL)
    {
        q->head = newNode;
        q->tail = newNode;
    }
    else
    {
        q->tail->next = newNode;
        q->tail = newNode;
    }
}

int dequeue(Queue *q)
{

    if (q->head == NULL)
        return -999;
    else if (q->head == q->tail) // alternatively use size(head)
    {
        Node *temp = q->head;
        q->head = NULL;
        q->tail = NULL;
        int data = temp->data;
        free(temp);
        return data;
    }
    else
    {
        Node *temp = q->head;
        int data = temp->data;
        q->head = q->head->next;
        free(temp);
        return data;
    }
}

int peek(Queue *q)
{
    if (q->head == NULL)
        return -999;
    else
        return q->head->data;
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