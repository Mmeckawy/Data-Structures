#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include <iostream>
using namespace std;

/* Structure of node */
struct Node{
    int data;
    Node* next;
};

/* Define the linked list class */
class single_linked_list
{
public:
    // Pointer to the first node in the list
    Node* head;
    // Constructor initializes head to NULL
    single_linked_list() : head(NULL){}

    /* Operations */
    void display(void);
    void insertNode(int pos, int val);
    void deleteNode(int pos);
    void searchNode(int val);
};


#endif