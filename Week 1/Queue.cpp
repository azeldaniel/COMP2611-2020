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
 * @var     head    Node pointer to hold the address of the item at the
 *                  head of the queue.
 * @var     tail    Node pointer to hold the address of the item at the
 *                  tail of the queue.
 */
struct Queue
{
    Node *head;
    Node *tail;
};

/*
 * Function prototypes for the following tasks:
 * 1. Creating a new queue.
 * 2. Enqueuing a new node into the queue.
 * 3. Dequeuing the front node from the queue.
 * 4. Retriving the data from the node at the front of the queue.
 */
Queue *initQueue();
void enqueue(Queue *q, int n);
int dequeue(Queue *q);
int peek(Queue *q);

/*
 * Linked list functions used.
 */
Node *createNode(int n);
void printList(Node *top);

/*
 * You are required to uncomment and compile your code after finishing each 
 * question covered in the lab.
 */
int main()
{
    /*

    // 1. Creating a new queue.
    int num;
    Queue *q;
    q = initQueue();
    cout << "Queue initialized!" << endl;

    /*

    // 2. Enqueuing a new node into the queue.
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    cout << "Enqueued 3 items (10, 20, 30) onto queue" << endl;
    cout << "Queue: ";
    printList(q->head);

    /*

    // 3. Dequeuing the front node from the queue.
    dequeue(q);
    dequeue(q);
    cout << "Dequeued 2 items from stack" << endl;
    cout << "Stack: ";
    printList(q->head);

    /*

    // 4. Retriving the data from the node at the front of the queue.
    cout << "What is at the front of the queue?" << endl;
    cout << peek(q) << endl;
    num = dequeue(q);
    cout << "Dequeued " << num << " from queue" << endl;
    cout << "What is at the front of the queue?" << endl;
    cout << peek(q) << endl;

    */

    return 0;
}

/**
 * Function that creates a new, empty queue
 * @return          Node pointer to the newly created queue.
 */
Queue *initQueue()
{
    Queue *q;

    /* insert code here */

    return q;
}

/**
 * Function that enqueues a new node (containing the data in @param `n`) onto a 
 * queue.
 * @param   q       Queue pointer to the queue structure.
 * @param   n       Integer data for node to be inserted.
 */
void enqueue(Queue *q, int n)
{
    /* insert code here */
}

/**
 * Function that dequeues a node from the front of a queue.
 * @param   q       Queue pointer to the queue structure.
 * @return          Integer variable containing to the new top of the linked list.
 */
int dequeue(Queue *q)
{
    /* insert code here */

    return 0; // replace as necessary
}

/**
 * Function that retrives the data from the node at the front of the queue (if 
 * possible). Returns -999 if the queue is empty.
 * @param   q       Node pointer to the top of the linked list.
 * @return          Integer data of the found node (or NULL).
 */
int peek(Queue *q)
{
    /* insert code here */

    return 0; // replace as necessary
}

/*
 * Duplicated code from LinkedList.cpp for convenience.
 */
/* insert code for - Node *createNode(int n) - if necessary */
/* insert code for - void printList(Node *top) - if necessary */
