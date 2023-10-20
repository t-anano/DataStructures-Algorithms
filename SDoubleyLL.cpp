#include "SDoubleyLL.h"

SDoubleyLL<E>::SDoubleyLL(){
    header = new SDoubleyNode<E>;
    trailer = new SDoubleyNode<E>; 

    header->next = trailer; 
    trailer->prev = header; 
}

SDoubleyLL<E>::~SDoubleyLL(){
        while(!empty()) removeFront(); 
        delete header; 
        delete trailer; 
}

bool SDoubleyLL<E>::empty() const{
    return header->next == trailer;
}

const E& SDoubleyLL<E>::front()const{
    return header->next->elem; 
} 

const E& SDoubleyLL<E>::back()const{
    return trailer->prev->elem; 
} 

void SDoubley<E>::add(const E& e){
        SDoubleyNode<E> myNode; 
        myNode->next = head; 
        head = myNext; 
}




