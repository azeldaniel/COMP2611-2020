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

/*
 * Function prototypes for the following tasks:
 * 1. Creating a new node.
 * 2. Inserting a new node at the head of a list.
 * 3. Printing the contents of a list.
 * 4. Inserting a new node at the tail of a list.
 * 5. Inserting a new node at a given index of a list.
 * 6. Deleting the node at the head of a list.
 * 7. Retrieving the node at a given index of a list.
 * 8. Retrieving the data of the node at a given index of a list.
 * 9. Retrieving the node at the tail of a list.
 * 10. Determining the size of a list.
 * 11. Reversing the order of the nodes in a list.
 */
Node *createNode(int n);
Node *insertAtHead(Node *top, int n);
void printList(Node *top);
Node *insertAtTail(Node *top, int n);
Node *insertAtIndex(Node *top, int n, int index);
Node *deleteAtHead(Node *top);
Node *find(Node *top, int index);
int get(Node *top, int index);
Node *getLast(Node *top);
bool contains(Node *top, int key);
int size(Node *top);
Node *reverse(Node *top);

/*
 * You are required to uncomment and compile your code after finishing each 
 * question covered in the lab.
 */
int main()
{
    /*

    // 1. Creating a new node.
    int nodeSize, len;
    Node *top, *last, *np;
    nodeSize = sizeof(Node);
    cout << "Amount of storage required to store a Node is ";
    cout << nodeSize << " bytes." << endl;

    /*

    // 2. Inserting a new node at the head of a list.
    cout << "\nNow about to insert 17, 23, 250 at head of the list ...\n";
    cout << "List: ";
    top = NULL; // no elements as yet so top must be NULL
    top = insertAtHead(top, 17);
    top = insertAtHead(top, 23);
    top = insertAtHead(top, 250);

    /*

    // 3. Printing the contents of a list.
    printList(top);

    /*

    // 4. Inserting a new node at the tail of a list.
    cout << "\nNow about to insert 4, 10, 500, 25 at tail of the list ...\n";
    cout << "List: ";
    top = insertAtTail(top, 4);
    top = insertAtTail(top, 10);
    top = insertAtTail(top, 500);
    top = insertAtTail(top, 25);
    printList(top);

    /*

    // 5. Inserting a new node at a given index of a list.
    cout << "\nNow about to insert 333 at position 5 of the list ...\n";
    cout << "List: ";
    top = insertAtIndex(top, 333, 5);
    printList(top);

    /*

    // 6. Deleting the node at the head of a list.
    int index = 3;
    np = find(top, index);
    if (np != NULL)
        cout << "\nElement " << index << " in the list is " << np->data << endl;
    else
        cout << "\nThe list does not contain element " << index << endl;

    /*

    // 7. Retrieving the node at a given index of a list.
    int found = get(top, 6);
    cout << "\nValue at position 6 is " << found << endl;

    /*

    // 8. Retrieving the data of the node at a given index of a list.
    last = getLast(top);
    if (last != NULL)
        cout << "\nData in the last node is " << last->data << "\n";
    else
        cout << "\nThere are no elements in the list.\n";

    /*

    // 9. Retrieving the node at the tail of a list.
    int key;
    cout << "\nPlease enter a key to search for or -1 to stop searching: ";
    cin >> key;
    while (key != -1)
    {
        if (contains(top, key))
            cout << key << " is contained in the list.\n";
        else
            cout << key << " is not present in the list.\n";

        cout << "Please enter a key to search for or -1 to stop searching: ";
        cin >> key;
    }

    /*

    // 10. Determining the size of a list.
    len = size(top);
    cout << "\nThe length of the list is " << len << endl;

    /*

    // 11. Reversing the order of the nodes in a list.
    cout << "\nBefore list is reversed.\nList: ";
    printList(top);
    top = reverse(top);
    cout << "After list is reversed.\nList: ";
    printList(top);

    */

    system("pause");
    return 0;
}

/**
 * Function that creates a new node with the given node data.
 * @param   n       Integer data for node to be created.
 * @return          Node pointer to the newly created node.
 */
Node *createNode(int n)
{
    Node *newNode;

    /* insert code here */

    return newNode;
}

/**
 * Function that inserts a new node (containing the data in @param `n`) at the 
 * head of a linked list.
 * @param   top     Node pointer to the top of the linked list.
 * @param   n       Integer data for node to be inserted.
 * @return          Node pointer to the new top of the linked list.
 */
Node *insertAtHead(Node *top, int n)
{
    /* insert code here */

    return NULL; // replace as necessary
}

/**
 * Function (non-recursive) that prints the content of a linked list.
 * @param   top     Node pointer to the top of the linked list.
 */
void printList(Node *top)
{
    /* insert code here */
}

/**
 * Function that inserts a new node (containing the data in @param `n`) at the 
 * tail of a linked list.
 * @param   top     Node pointer to the top of the linked list.
 * @param   n       Integer data for node to be inserted.
 * @return          Node pointer to the top of the linked list.
 */
Node *insertAtTail(Node *top, int n)
{
    /* insert code here */

    return NULL; // replace as necessary
}

/**
 * Function that inserts a new node (containing the data in @param `n`) at a 
 * particular index of a linked list.
 * @param   top     Node pointer to the top of the linked list.
 * @param   n       Integer data for node to be inserted.
 * @param   index   Integer specifying the index for node to be inserted.
 * @return          Node pointer to the top of the linked list.
 */
Node *insertAtIndex(Node *top, int n, int index)
{
    /* insert code here */

    return NULL; // replace as necessary
}

/**
 * Function that deletes the head of a linked list (if possible). Returns NULL 
 * if the linked list is empty.
 * @param   top     Node pointer to the top of the linked list.
 * @return          Node pointer to the top of the linked list (or NULL).
 */
Node *deleteAtHead(Node *top)
{
    /* insert code here */

    return NULL; // replace as necessary
}

/**
 * Function that finds the node corresponding to a particlar index in a linked 
 * list and returns it (if possible). Returns NULL if the node is not not 
 * found.
 * @param   top     Node pointer to the top of the linked list.
 * @param   index   Integer specifying the index for node to be found.
 * @return          Node pointer to the found node (or NULL).
 */
Node *find(Node *top, int index)
{
    /* insert code here */

    return NULL; // replace as necessary
}

/**
 * Function that finds the last node in a linked list and returns it (if 
 * possible). Returns NULL if the linked list is empty.
 * @param   top     Node pointer to the top of the linked list.
 * @param   index   Integer specifying the index for node to be found.
 * @return          Node pointer to the last node (or NULL).
 */
Node *getLast(Node *top)
{
    /* insert code here */

    return NULL; // replace as necessary
}

/**
 * Function that finds the node corresponding to a particlar index in a linked 
 * list and returns its data (if possible). Returns NULL if the node is not 
 * found.
 * @param   top     Node pointer to the top of the linked list.
 * @param   index   Integer specifying the index for node to be found.
 * @return          Integer data of the found node (or NULL).
 */
int get(Node *top, int index)
{
    /* insert code here */

    return -999; // replace as necessary
}

/**
 * Function that determines if a linked list contains a data item or not.
 * @param   top     Node pointer to the top of the linked list.
 * @param   key     Integer specifying the query data.
 * @return          Boolean variable containing true if the key was found or 
 *                  false otherwise.
 */
bool contains(Node *top, int key)
{
    /* insert code here */

    return false; // replace as necessary
}

/**
 * Function that determines the length of a linked list.
 * @param   top     Node pointer to the top of the linked list.
 * @return          Integer variable containing the length of the linked list.
 */
int size(Node *top)
{
    /* insert code here */

    return 0; // replace as necessary
}

/**
 * Function (non-recursive) that reverses the order of the nodes in a linked 
 * list.
 * @param   top     Node pointer to the top of the linked list.
 */
Node *reverse(Node *top)
{
    /* insert code here */

    return NULL; // replace as necessary
}
