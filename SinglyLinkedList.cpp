#include "SinglyLinkedList.h"

using namespace std; 

SinglyLinkedList::SinglyLinkedList(): head(nullptr){

}

SinglyLinkedList::~SinglyLinkedList(){ //destructor 
    while(!empty()){
        removeFront(); 
    }
}

bool SinglyLinkedList::empty() const{ // check if list is empty
        return head == nullptr; 
}

const string& SinglyLinkedList::front() const{ //get front element 
    return head->elem; 
}


/*
    Algorithm
    Insertion to the Front of a Singly Linked List:

*/
void SinglyLinkedList::addFront(string &e) {
        StringNode* curr = new StringNode; //Create a new String Node
        curr->elem = e; //set the element in the new String Node
        curr->next = head; // make the next head 
        head = curr; // make the head, curr

}

void SinglyLinkedList::removeFront(){ //ReSmove from front of LinkedList 
    StringNode* old = head; //Save curr head to be deleted
    head = old->next; //Move head to next 
    delete old;  // Delete old head 
}