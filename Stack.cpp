#include "Stack.h"

template <typename E> 
ArrayStack<E>::ArrayStack(int cap): S = new E[cap], capacity = cap, t =-1{

}

template <typename E> 
int ArrayStack<E>::size() const { // read-only 
    return (t+1)
}

template <typename E> 
bool ArrayStack<E>::empty() const {
    return ( t < 0)
}

template <typename E> 
const E& ArrayStack<E>::top() const throw(StackEmpty){
    if(empty()){
        throw(StackEmpty)
        cout << "Top of empty Stack" << endl; 
    }
    return S[t]; 
}

template <typename E>
void ArrayStack<E>::push(const E& e) throw(StackFull){
        if(size() == capacity){
            throw(StackFull)
            cout << "Push to Full Stack" << endl; 
        }

        S[++t] = e; 
}

template <typename E>
void ArrayStack<E>::pop() throw(StackEmpty) {
    if(empty()){
        throw(StackEmpty); 
        cout << "Pop from empty stack" << endl; 
    }
    --t; 
}
