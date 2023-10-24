// Program to count the number of bits that are set to 1 
// in a nonegative integer 

short CountBits(unsigned int x){
    short num_bits = 0; 
    while(x){
        num_bits += x & 1; // Bitwise &; Produces 1 or 0 based on LSB 
        x >>= 1; // Right-shift operator; Shifts x to right by 1 
    }
    return num_bits; 

}

// Best Case: O(1) where X is 0 
// Worst Case: O(n) where x = (11111)_2 

