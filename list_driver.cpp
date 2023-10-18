#include "SLinkedList.h"
#include <Windows.h>


int main(){ 

    SLinkedList<std::string> myList; 

    myList.addFront("List"); 

    myList.addFront("Linked"); 

    myList.addFront("is my");

    myList.addFront("This"); 

    // myList.print();

    // Sleep(100);  
    


    return 0; 
}