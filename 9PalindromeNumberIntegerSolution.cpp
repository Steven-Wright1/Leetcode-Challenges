class Solution {
public:
    bool isPalindrome(int x) {
        int reversed_int = 0; 
        int mem = x; 
            
        if(x < 0) return false; 
        
        while( x > 0) {
            
            int pop = x % 10; 
            x /= 10; 
        
            reversed_int = reversed_int * 10 + pop;      
        }
        
        if((mem - reversed_int) == 0) return true; 
        
        return false; 
    }
};