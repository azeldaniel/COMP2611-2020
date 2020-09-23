#include <iostream>
#include <cstdlib>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *createNode(int n);
void printList(Node *top);

Node *findLargest(Node *top);
int findLargestInt(Node *top);
int largest(Node *top);
int sum1(Node *top);
int sum2(Node *top);
bool isSame(Node *top1, Node *top2);
bool equals(Node *top1, Node *top2);
void appendList(Node *top1, Node *top2);
Node *append(Node *List1, Node *List2);
Node *Append(Node *top1, Node *top2);
void appendList(Node *top1, Node *top2);

int main()
{
    Node *top1 = createNode(0);
    Node *top2 = createNode(0);

    Node *curr = top1;
    for (int i = 1; i < 5; i++)
    {
        curr->next = createNode(i);
        curr = curr->next;
    }
    curr = top2;
    for (int i = 1; i < 5; i++)
    {
        curr->next = createNode(i);
        curr = curr->next;
    }

    cout << "List 1: ";
    printList(top1);
    cout << "List 2: ";
    printList(top2);

    // 2. a.
    Node *largest = findLargest(top1);
    if (largest == NULL)
        cout << "\n(2.a) List 1 is empty" << endl;
    else
        cout << "\n(2.a) Largest item in list 1 is: " << largest->data << endl;

    // 2. b.
    int sum = sum1(top1);
    cout << "\n(2.b) The sum of list 1 is: " << sum << endl;

    // 2. c.
    bool same = isSame(top1, top2);
    if (same)
        cout << "\n(2.c) The two lists are the same" << endl;
    else
        cout << "\n(2.c) The two lists are NOT the same" << endl;

    // 2. d.
    appendList(top1, top2);
    cout << "\n(2.d) Appended list 1 to the end of list 2" << endl;
    cout << "Appended list:";
    printList(top1);

    return 0;
}

/* 2. a. Node based Solution */
Node *findLargest(Node *top)
{
    if (top == NULL)
        return NULL;
    else if (top->next == NULL)
        return top;
    else
    {
        Node *nextLargest = findLargest(top->next);
        if (top->data > nextLargest->data)
            return top;
        else
            return nextLargest;
    }
}

/* 2. a. Integer based solution */
int findLargestInt(Node *top)
{
    if (top == NULL) // empty list
    {
        cout << "Empty list" << endl;
        return -999;
    }
    else if (top->next == NULL) // end of the list
        return top->data;
    else
    {
        int nextLargestInt = findLargestInt(top->next);
        if (top->data > nextLargestInt)
            return top->data;
        else
            return nextLargestInt;
    }
}

// List: 1, 5, 3
// call a: findLargestInt(1), calls (findLargestInt(5)) -> 1 < 5, return 5
// call b: findLargestInt(5), calls (findLargestInt(3)) ->  5 > 3, return 5
// call c: findLargestInt(3), return 3

/* 2. a. Alternative Solution by Jonathan (Wed) */
int largest(Node *top)
{
    if (top == NULL)
        return -99999999;

    if (top->data > largest(top->next))
    {
        return top->data;
    }
    return largest(top->next);
}

/* 2. b. Solution by Brandon (Wed) */
int sum1(Node *top)
{
    if (top != NULL)
    {
        return top->data + sum1(top->next);
    }
    else
    {
        return 0;
    }
}

/* 2. b. Solution by Nicholas (m) (Wed) */
int sum2(Node *top)
{
    if (top == NULL)
        return 0;
    return top->data + sum2(top->next);
}

/* 2. c. */
bool isSame(Node *top1, Node *top2)
{
    if (top1 == NULL || top2 == NULL)
        return false;
    else if (top1->data != top2->data)
        return false;
    else if (top1->next == NULL && top2->next == NULL)
        return true;
    else
        return isSame(top1->next, top2->next);
}

/* 2. c. Alternative solution by Evan (Wed) */
bool equals(Node *top1, Node *top2)
{
    if (top1 == NULL && top2 == NULL) // end of the list has reached
        return true;
    if (top1 != NULL && top2 == NULL) // list 1 is longer than list 2
        return false;
    if (top1 == NULL && top2 != NULL) // list 2 is longer than list 1
        return false;
    if (top1->data != top2->data) // at least 1 item in corresponding positions are not equal
        return false;

    return equals(top1->next, top2->next);
}

/* 2. d. Void based approach which assumes caller retains top1 reference */
void appendList(Node *top1, Node *top2)
{
    if (top1 == NULL || top2 == NULL)
        cout << "\nInvalid list input. Both lists must be non-empty" << endl;
    else if (top1->next == NULL)
        top1->next = top2;
    else
        appendList(top1->next, top2);
}

/* 2. d. Node based solution by Sameir (Wed) */
Node *Append(Node *top1, Node *top2)
{
    if (top1 == NULL)
        return top2;
    if (top1->next != NULL)
        return Append(top1->next, top2);
    top1->next = top2;
    return top1; // may not necessarily be the original top1
}

/* 2. d. Solution by Brandon (Wed) */
Node *append(Node *List1, Node *List2)
{
    if (List1 == NULL && List2 == NULL)
    {
        cout << "Both lists are empty";
        return List1;
    }
    else if (List1 == NULL)
    {
        return List2;
    }
    else if (List2 == NULL)
    {
        return List1;
    }

    if (List1->next != NULL)
    {
        append(List1->next, List2);
    }
    else
    {
        List1->next = List2;
    }
    return List1; // may not necessarily be the original top of List1
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