class Solution {
public:
    int reverse(int x) {
        int reversed_int = 0;
       
        while(x != 0){
            int pop = x % 10; 
            x = x/10; 
            
            if(reversed_int  < INT_MIN/10 || (reversed_int == INT_MIN && pop < -8)) return 0; 
            if(reversed_int > INT_MAX/10 || (reversed_int == INT_MAX && pop > 7)) return 0; 
        
           
            reversed_int = reversed_int * 10 + pop; 
        }
        
        return reversed_int;         
    }
};