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
    cout << "Enqueued 3 items (10, 20, 30) onto queue" << endl;
    cout << "Queue: ";
    printList(q->head);

    // Popping items from a stack
    dequeue(q);
    dequeue(q);
    cout << "Dequeued 2 items from stack" << endl;
    cout << "Stack: ";
    printList(q->head);

    // Checking if a stack is empty
    cout << "What is at the front of the queue?" << endl;
    cout << peek(q) << endl;
    num = dequeue(q);
    cout << "Dequeued " << num << " from queue" << endl;
    cout << "What is at the front of the queue?" << endl;
    cout << peek(q) << endl;

    return 0;
}

/**
 * Function that creates a new, empty queue
 * @return          Node pointer to the newly created queue.
 */
Queue *initQueue()
{
    Queue *q;

    q = (Queue *)malloc(sizeof(Queue));
    q->head = NULL;
    q->tail = NULL;

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

/**
 * Function that dequeues a node from the front of a queue.
 * @param   q       Queue pointer to the queue structure.
 * @return          Integer variable containing to the new top of the linked list.
 */
int dequeue(Queue *q)
{
    if (q->head == NULL)
        return -999;

    Node *temp = q->head;
    int data = temp->data;
    q->head = q->head->next;
    free(temp);

    return data;
}

/**
 * Function that retrives the data from the node at the front of the queue (if 
 * possible). Returns -999 if the queue is empty.
 * @param   q       Node pointer to the top of the linked list.
 * @return          Integer data of the found node (or NULL).
 */
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