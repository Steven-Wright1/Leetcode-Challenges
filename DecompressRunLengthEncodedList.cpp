class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> result; 
        
        for(int i = 1; i < nums.size(); i+=2){
            if(nums[i-1] == 1)
                result.push_back(nums[i]);
            if(nums[i - 1] > 1)
            {
                for(int j = 0; j < nums[i - 1]; j++)
                    result.push_back(nums[i]);
            }
        }
        return result;
    }
};