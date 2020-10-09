class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x >= INT_MAX) 
                return false; 
        
        
        // convert integer to string
        string str = to_string(x);
        
        // Reverse the string
        int y = 0, z = str.length()-1;      
        while(y < z)
            swap(str[y++],str[z--]); 
        
        // Convert reversed string back into integer to save memory
        stringstream x_string(str); 
        x_string >> y;                  // Assign reversed string to a pre-existing integer to save memory
        
        
        if(y == x) return true;         // If the original integer = reversed integer -> return true (it is a palindrome)
        
        return false;                   // Return false unless proven otherwise
    }
};