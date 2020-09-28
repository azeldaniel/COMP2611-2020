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

// function prototypes

Node *createNode(string skill_name, int skill_years);
Node *insertAtHead(Node *top, string skill_name, int skill_years);
bool contains(Node *top, string key);
int size(Node *top);
void printList(Node *top);

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
