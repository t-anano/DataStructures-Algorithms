#include <iostream>
using namespace std;
 
int main() {
    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;
 
    // The result is 00000001
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;
    // The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers.
    //  The result of AND is 1 only if both bits are 1.  

    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;
    //  The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. 
    //  The result of OR is 1 if any of the two bits is 1. 

    // The result is 00001100. exclusively a or b 
    cout << "a ^ b = " << (a ^ b) << endl;
    //  The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. 
    //  The result of XOR is 1 if the two bits are different. 
    // The result is 11111010
    cout << "~a = " << (~a) << endl;
 
    // The result is 00010010
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;
    //  The << (left shift) in C or C++ takes two numbers, the left shifts the bits of the first operand, and
    //   the second operand decides the number of places to shift. 

    // The result is 00000100
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
    // The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, 
    // and the second operand decides the number of places to shift.
 
    return 0;
}
 