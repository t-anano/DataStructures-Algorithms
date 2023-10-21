// LIFO - Last in, First out Structure 
// Like a Stack of Pancakes -> Refers to removal of elements 
// Could also say First In Last Out Container 
// Push() onto a stack and Pop() off of a stack 
// Internet Web Browsers store the addresses of recently visited
// websites on a stack 
// Think "undo" and "back", make a change push() and revise by pop()




template <typename E>
class ArrayStack {
enum { DEF CAPACITY = 100 }; // default stack capacity
public:
ArrayStack(int cap = DEF CAPACITY); // constructor from capacity
int size() const; // number of items in the stack
bool empty() const; // is the stack empty?
const E& top() const throw(StackEmpty); // get the top element
void push(const E& e) throw(StackFull); // push element onto stack
void pop() throw(StackEmpty); // pop the stack
// . . .housekeeping functions omitted
private: // member data
E* S; // array of stack elements
int capacity; // stack capacity
int t; // index of the top of the stack
};