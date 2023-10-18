#include "SLinkedList.h"

template <typename E> 
SLinkedList<E>::SLinkedList() : head(nullptr) {

}

template <typename E> 
SLinkedList<E>::~SLinkedList(){
    while(!empty()){removeFront(); }
}

template <typename E> 
bool SLinkedList<E>::empty() const {
    return head == nullptr; 
}

template <typename E> 
const E& SLinkedList<E>::front() const{   
     return head->elem; 
}

template <typename E> 
void SLinkedList<E>::addFront(const E& e){   
     SNode<E> element = new SNode<E>; // allocate memory on the heap 
     element->elem = e;  // new e is stored in the new SNode; 
     element->next = head; //elem points to old head which contains rest of the list 
     head = element; //head is updated as pointer to front of the list 
}

/*
template <typename E> 
void SLinkedList<E>::print(){
    SNode<E>* myIt = head; 
    while(myIt->next != nullptr){
        std::cout << myIt->elem << std::endl; 
        myIt = myIt->next; 
    }

*/






