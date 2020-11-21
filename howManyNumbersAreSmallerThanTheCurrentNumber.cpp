class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int count = 0; 
        vector<int> lesser_nums;
        
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if((nums[j] < nums[i]) && (i != j)) 
                    count ++;
            }
            lesser_nums.push_back(count); 
            count = 0;
        }
        
        return(lesser_nums);
    }
};