#include "SDoubleyLL.h"

template<class E> 
class SDoubleyLL; 

template <class E> 
class SDoubleyNode{
    private: 
       E elem; 
       SDoubleyNode<E>* next; 
       SDoubleyNode<E>* prev;
       friend class SDoubleyLL; 
       
}; 

