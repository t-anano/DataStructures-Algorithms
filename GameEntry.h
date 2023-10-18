#include <cstdlib>
#include<iostream> 
using namespace std; 

class GameEntry{
    public: 
        GameEntry(const string& n = "", int s=0);
        string getName() const; //const indicates read-only 
        int getScore() const; 
    private: 
        string name; 
        int score; 

}; 