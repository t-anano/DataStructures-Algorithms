#include <iostream> 
#include <cstdlib>

int main(){

  int command; 
  std::cin >> command; 

  switch(command){
    case 'I':
        std::cout << "I"; 
        break;
    case 'D':
        std::cout << 'D';
        break; 
    default: 
        std::cout << "Unrecognized command"
  }



    return 0; 
}