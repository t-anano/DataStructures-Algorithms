#include <cstdlib>
#include <iostream> 


using namespace std; 

class StringNode{
    private: 
        string elem;
        StringNode* next;  
    
    friend class SinglyLinkedList; //SinglyLinkedList now has access rights 
}; 

class SinglyLinkedList{
    public: 
        SinglyLinkedList(); 
        ~SinglyLinkedList(); 
        bool empty() const; //  is the list empty? 
        const string& front() const; //get front element
        void addFront(string& e); // add to front of the list 
        void removeFront(); 
    private: 
        StringNode* head; //Pointer to the head of the list 


}; 