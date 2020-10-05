#include <iostream>
#include <cstdlib>

using namespace std;

#include "Skill.h"

    
Node * createNode (string skill_name, int skill_years) {
   Node * newNode; 
   
   newNode = new Node;
   
   newNode->data.name = skill_name;
   newNode->data.years = skill_years;

   newNode->next = NULL;

   return newNode;
}



Node * insertAtHead (Node * top, string skill_name, int skill_years) {
   Node * newNode;
   
   newNode = createNode (skill_name, skill_years);
   newNode->next = top;
   top = newNode;
   
   return top;
}   



bool contains (Node * top, string key) {

   Node * curr;
   
   curr = top;
   while (curr != NULL) {
      if (curr->data.name == key)
         return true;
      else
         curr = curr->next;
   }
   return false;      
}



int size (Node * top) {
   Node * curr;
   int numNodes = 0;
   
   curr = top;
   while (curr != NULL) {
      numNodes = numNodes + 1;
      curr = curr->next;
   }
   return numNodes;
}



void printList (Node * top) {
   Node * curr;
   
   curr = top;
   while (curr != NULL) {
      cout << curr->data.name << "\t";
      cout << curr->data.years << endl;
      curr = curr->next;
   }

   cout << "\n";
}

