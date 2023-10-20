#include "SDoubleyNode.h"

template <class E> 
class SDoubleyLL
{
private:
    SDoubleyNode<E>* header; 
    SDoubleyNode<E>* trailer; 
public:
    SDoubleyLL();
    ~SDoubleyLL();
    bool empty() const; 
    const E& front() const; 
    const E& back() const; 
    void addFront(const E& e);
    void addBack(const E& e);
    void removeFront(); 
    void removeBack();   
protected: 
   void add(SDoubleyNode<E>* v, const E& e);
   void remove(SDoubleyNode<E>* e);  

    

};


