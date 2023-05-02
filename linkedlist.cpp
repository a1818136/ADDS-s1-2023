#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len){
    head = nullptr;
    for (int i=len-1; i>=0; i--){
        head = new Node(array[i], head);
    }
}

LinkedList::~LinkedList() {
    while(head != nullptr) {
        deleteFromFront();
    }
}

void LinkedList::insertPosition(int pos, int newNum){
    if (pos <= 1) {
        head = new Node(newNum, head);
        return;
    }

    // if inserting between two nodes; i.e. [A, C] -> [A, B, C]
    Node *prevNode = traverse(pos-1);

    // if inserting out of bounds, abort
    if (prevNode == nullptr) {
        int position = 0;
        Node* currNode = head;
        while (currNode != nullptr) {
            position++;
            currNode = currNode->link;
        }
        prevNode = traverse(position);
    }
    
    Node *newNode  = new Node(newNum, prevNode->link);
    prevNode->link = newNode;
    return;
}

bool LinkedList::deletePosition(int pos){
    if (head == nullptr) {
        return false;
    }

    if (pos == 1){
        Node* temp = head;
        head = head->link;
        delete temp;
    }
    
    Node* targetNode = traverse(pos);

    if (targetNode == nullptr) {
        return false;
    }

    Node *prevNode = traverse(pos-1);

    Node* temp = targetNode;
    prevNode->link = targetNode->link;
    delete temp;
    return true;
}

int LinkedList::get(int pos){
    
    Node* targetNode = traverse(pos);

    if (targetNode == nullptr) {
        return std::numeric_limits < int >::max();
    }

    return targetNode->data;
}

int LinkedList::search(int target){
    if (head == nullptr) {
        return -1;
    }

    int pos = 1;
    Node* targetNode = traverse(pos);

    while(targetNode->data != target){
        pos++;
        targetNode = traverse(pos);
        if (targetNode == nullptr) {
             return -1;
        }
    }
    return pos;
}

void LinkedList::printList() {
    Node* currNode = head; 
    std::cout << "[" << currNode->data;
    currNode = currNode->link; 
    while (currNode != nullptr) { 
        std::cout << " " << currNode->data; 
        currNode = currNode->link; 
    } 
    std::cout << "]" <<std::endl; 
}



Node* LinkedList::traverse(unsigned int index) {
    unsigned int position = 1;
    Node* currNode = head; 

    while (currNode != nullptr && position < index) { 
        currNode = currNode->link; 
        position++;
    } 
    
    return currNode;
}

/*
void LinkedList::insertAtPosition(int item, unsigned int index) {
    // if adding in front of the current head (including if the list is empty)
    if (index == 0) {
        head = new Node(item, head);
        return;
    }

    // if inserting between two nodes; i.e. [A, C] -> [A, B, C]
    Node *prevNode = traverse(index-1);

    // if inserting out of bounds, abort
    if (prevNode == nullptr) {
        return;
    }

    Node *newNode  = new Node(item, prevNode->link);
    prevNode->link = newNode;
}
*/
void LinkedList::deleteFromFront() {
    if (head == nullptr) {
        return;
    }

    Node* temp = head;
    head = head->link;
    delete temp;
}