class Solution {
    
public:
    bool isValid(string s) {
        stack <char> st;
        
        for(int i = 0; i < s.length(); i++){
            
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){
                if( s.empty())
                    return false;
                else if( s[i] == ')' && st.top() != '(') return false;
                else if( s[i] == '}' && st.top() != '{') return false;
                else if( s[i] == ']' && st.top() != '[') return false;
                else 
                    st.pop();
            }
        }
        if(st.empty())
            return true;
        else 
            return false;
    }
};