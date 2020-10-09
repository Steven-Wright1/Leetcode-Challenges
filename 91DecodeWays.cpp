#include <iostream>
#include <string>

using namespace std; 

class Solution {
public:

    int numDecodings(string s) {
        
        if(s.length() < 1) // if the string is empty, there are zero ways to decode. 
            return 0; 
        
        if(s[0] == '0')    // 0 does not correspond to a letter, so same as above
            return 0; 
        
        // Begin decoding sequence. If the string only has one digit
        if(s.length() == 1) 
            return 1;
        
        int val1 = 1; 
        int val2 = 1;
        
        for(int i = 1; i < s.length(); i++){ // start iterating from 2nd character as base cases are                                                                         accounted for, and val2 starts at 1. 
            
            //create two variables to move along the sequence. 
            // Done to check 2-digit solutions (ie 19 has 3 decodes (A,I,S) but 34 only has two (C,D))
            int d1 = s[i] - '0';                 //d1 is the righter-most digit (in above exmaples, 9 and 4)
            int d2 = (s[i-1] - '0')*10 + d1;    //d2 gives the 2-digit number (ie 1*10 + 9 = 19)  

            int val = 0;                
            if(d1 >= 1)
                val += val2; 
            if(d2 >= 10 && d2 <= 26)
                val += val1; 
            
            val1 = val2; 
            val2 = val;          

            }
        return val2; 
    
    }
};

int main() {

int val2; 
string s = "123"; 
Solution obj; 

cout << obj.numDecodings(s); 

    return 0;
}