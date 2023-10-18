template <class E> 
class SLinkedList; 

template <class E> //Declaring a template class in C++ 
class SNode{
    private:
        E elem; 
        SNode<E>* next; 
        friend class SLinkedList<E>; 
};