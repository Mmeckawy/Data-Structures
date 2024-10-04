#include <iostream>
#include "single_linked_list.h"

using namespace std;

int main(){
    single_linked_list list;

    /* Testing the operations */
   list.insertNode(1,15);
   list.insertNode(2,43);
   list.insertNode(3,11);
   list.insertNode(2,56);

   list.display();
   list.deleteNode(4);
   list.display();
   list.searchNode(56);
   list.searchNode(55);

    return 0;
}