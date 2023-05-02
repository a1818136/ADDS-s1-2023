#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {
    Node* head;
    // traverse the list until reaching the node at specified position, & returnthat node's address
    Node* traverse(unsigned int index);

    /*
    // create a new node with an int of data at the index'th position of the list;inserting out of bounds does nothing
    void insertAtPosition(int item, unsigned int index);
    */
   
    // deletes the front node from the list
    void deleteFromFront();

public:
    LinkedList();
    LinkedList(int* array, int len);
    ~LinkedList();
    
    void insertPosition(int pos, int newNum);

    bool deletePosition(int pos);

    int get(int pos);

    int search(int target);

    void printList();
};

#endif