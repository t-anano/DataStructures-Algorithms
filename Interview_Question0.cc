#include <cstdlib>
#include <vector> 
#include <algorithm> 


using namespace std;

bool isLess(int a, int b){
    return a <= b; 
}

vector<int> isLesser(vector<int>& A, vector<int>& B){
    vector<int> solution; 
    for(auto &b : B ){
        int numLess = count_if(A.begin(), A.end(), isLess); 
        solution.push_back(numLess); 

    }
    return solution; 
}

