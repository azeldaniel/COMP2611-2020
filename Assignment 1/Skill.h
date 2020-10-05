#ifndef _SKILL_H
#define _SKILL_H

struct Skill {
   string name;
   int years;
};

struct Node {
   Skill data;
   Node * next;
};

Node * createNode (string skill_name, int skill_years);
Node * insertAtHead (Node * top, string skill_name, int skill_years);
bool contains (Node * top, string key);
int size (Node * top);
void printList (Node * top);

#endif
