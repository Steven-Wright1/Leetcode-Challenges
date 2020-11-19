class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        
        unordered_map<int,int> map; 
        
        // Assigns Key = Array Integer, Value = Array Index
        for(int i = 0; i < arr.size(); i++)
            map[arr[i]] = i; 
        
         for(auto a:pieces){
             int x = a[0]; 
             if(map.find(x) == map.end()) return false;
             int j = map[x];
             int i = 0;
             
             while(i < a.size() && j < arr.size()){
                 if(a[i] != arr[j]) return false; 
                 i++;
                 j++;
             }
             if(i != a.size()) return false; 
         }
        return true;
    }
};