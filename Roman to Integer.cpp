class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char, int> myMap = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        
        int res = myMap[s.back()];
        
        for(unsigned int i = 1; i < s.size(); i++)
        {
            if(myMap[s[i-1]] < myMap[s[i]])
                res -= myMap[s[i-1]];
             
             else
                res += myMap[s[i-1]];
        }
        
        return res; 
    }
};