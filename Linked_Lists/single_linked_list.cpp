#include "single_linked_list.h"


void single_linked_list::display(void)
{
    Node* temp = head;

    while(temp){
        cout<<temp -> data << " -> ";

        /* The current (temp) points at the first node and then it will be
        equivalent to the next poiner in the object*/
        temp = temp -> next;
    }
    cout<< "NULL" <<endl;
}

void single_linked_list::insertNode(int pos, int val)
{
    // Invalid position
    if(pos < 1){
        cout<< "Invalid" <<endl;
        return;
    }

    // Insert at the beginning
    if(pos == 1) {
        Node* newNode = new Node();
        newNode -> data = val;
        newNode -> next = head;
        head = newNode;
    }

    // Insert at a specific position
    Node* newNode = new Node();
    newNode -> data = val;
    Node* temp = head;

    for (int i = 1; i < pos - 1; ++i) {
            temp = temp->next;
        }

        // If the position is out of range, print an error message
        if (!temp) {
            cout << "Position out of range." << endl;
            delete newNode;
            return;
        }

        // Insert the new node at the desired position
        /*The (next) pointer of the new node is set to the node currently after (temp)
        then, (temp->next) is updated to the new node*/
        newNode->next = temp->next;
        temp->next = newNode;
}

void single_linked_list::deleteNode(int pos)
{
    Node* temp = head;

    // Invalid position
    if(pos < 1){
        cout<< "Invalid" <<endl;
        return;
    }

    if(pos==1){
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    for (int i = 1; i < pos - 1; ++i)
    {
        temp = temp->next;
    }
    if (!temp || !temp->next) {
            cout << "Position out of range." << endl;
            return;
        }
    Node* nodeToDel = temp->next;
    // Update the next pointer
    temp->next = temp->next->next;
    delete nodeToDel;
}

void single_linked_list::searchNode(int val)
{
    Node* temp = head;
    int pos = 1;

    while(temp){
        if(temp->data == val){
            cout<<val<<" is at: "<<pos<<endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    // Value not found
    cout << "Value " << val << " not found in the list." << endl;
}
