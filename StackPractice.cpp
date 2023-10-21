#include <stack>

using namespace std; 

int main(){

    std::stack<int> myStack; 
    myStack.push(0); 
    myStack.push(10); 
    myStack.push(7); 
    myStack.push(11);
    myStack.push(127); 

    myStack.emplace(8); 

   for(int i = 0; i < myStack.size(); i++){
        std::cout << myStack.top(); 
        myStack.pop();  // ----
                        //    | pop() t = t-1; 
                        //  o  | top() t = 1
   }                    //  o  |      t = 0 


    return 0; 
}