class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int sum = 0; 
        int count = 0;
        
        for(int i = 0; i < nums.size(); i++){
            while(nums[i] != 0){
                nums[i] /= 10; 
                count++;            
            }
            
            if(count % 2 == 0)
                sum++;        
                count = 0; 
        }
        return sum;
    }
};