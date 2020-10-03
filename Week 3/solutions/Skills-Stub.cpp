#include <iostream>
#include <cstdlib>

using namespace std;

struct Skill
{
    string name;
    int years;
};

struct Node
{
    Skill data;
    Node *next;
};

Node *createNode(string skill_name, int skill_years);
Node *insertAtHead(Node *top, string skill_name, int skill_years);
Node *insertAtHead2(Node *top, string skill_name, int skill_years);
bool contains(Node *top, string key);
bool contains2(Node *top, string key);
int size(Node *top);
int size2(Node *top);
void printList(Node *top);
void printList2(Node *top);

int main()
{

    int len;
    Node *top, *last;

    cout << "\nNow about to insert skills for this person ...\n";
    cout << endl;

    top = NULL; // no elements as yet so top must be NULL

    top = insertAtHead(top, "Programming", 10);
    top = insertAtHead(top, "Technical_Documentation", 5);
    top = insertAtHead(top, "Project_Management", 3);

    len = size(top);

    cout << "Person possesses the following " << len << " skills: " << endl;
    printList(top);

    string key;

    cout << "\nPlease enter a skill to search for or 0 to stop searching: ";
    cin >> key;

    while (key != "0")
    {

        if (contains(top, key))
            cout << "\n"
                 << key << " is contained in the list.\n";
        else
            cout << "\n"
                 << key << " is not present in the list.\n";

        cout << "\nPlease enter a key to search for or 0 to stop searching: ";
        cin >> key;
    }

    cout << "\n*** End of Linked List operations ***" << endl;

    return 0;
}

/* Solution by Max (Monday) and Aaron & Videsh (Wed) */
Node *createNode(string skill_name, int skill_years)
{
    Node *newNode = new Node;

    newNode->data.name = skill_name;
    newNode->data.years = skill_years;

    newNode->next = NULL;

    return newNode;
}

/* Solution by Kc (Wed) and Shane (Monday) */
Node *insertAtHead(Node *top, string skill_name, int skill_years)
{
    Node *newNode;

    newNode = createNode(skill_name, skill_years);
    newNode->next = top;
    top = newNode;

    return top;
}

/* Alternative solution by Aaron (Wed) */
Node *insertAtHead2(Node *top, string skill_name, int skill_years)
{
    Node *newNode = createNode(skill_name, skill_years);

    if (top == NULL)
        return newNode;
    else
    {
        newNode->next = top;
        top = newNode;
    }
    return top;
}

/* Solution by Aaron, Brandon, Kc & Jonathan (Wed) */
bool contains(Node *top, string key)
{
    Node *curr = top;
    while (curr != NULL)
    {
        if (curr->data.name == key)
            return true;
        curr = curr->next;
    }
    return false;
}

/* Alternative (recursive) solution by Jerry (Monday) */
bool contains2(Node *top, string key)
{
    if (top == NULL)
        return false;

    if (top->data.name == key)
        return true;

    else
        return contains2(top->next, key);
}

/* Solution by Shane (Monday) */
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

/* Solultion by Sameir (Wed) */
int size2(Node *top)
{
    if (top == NULL)
        return 0;
    return 1 + size2(top->next);
}

/* Solution by Aaron (Wed) and Carson (Monday) */
void printList(Node *top)
{
    Node *curr = top;
    while (curr != NULL)
    {
        cout << "name: " << curr->data.name << "   year: " << curr->data.years << endl;
        curr = curr->next;
    }
}

/* Alternative (recursive) solution by Andrei (Wed) */
void printList2(Node *top)
{
    if (top == NULL)
        return;

    cout << top->data.name << endl;
    cout << top->data.years << endl
         << endl;

    printList2(top->next);
}
