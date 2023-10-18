#include <cstdlib>
#include <iostream> 
#include "SNode.h"


using namespace std; 




//A class definiton of the generic singly linked list 
template <class E> 
class SLinkedList{
    public: 
        SLinkedList(); //empty list constructor 
        ~SLinkedList(); //destructor 
        bool empty() const; //is list empty? 
        const E& front() const;  
        void addFront(const E& e); //return front element 
        void removeFront(); //remove front item list 
        void print(); 
    private: 
        SNode<E>* head; //we can use an SNode<E>* here because it is a friend class 
};



