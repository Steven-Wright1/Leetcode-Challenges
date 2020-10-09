class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices; //Create a vector to store indices of solution elements
        vector<int> :: iterator it; //Creates a vector iterator
        
        for(int i = 0; i < nums.size(); i++){
            int comp_element = target - nums[i]; // Use to check each vector element
            it = find(nums.begin(), nums.end(), comp_element); // iterate through the vector to find complementary element
                
            if(it != nums.end()){ // Then the element has been found
            if((it - nums.begin()) == i)
                continue;         // skips the case where the same element is used twice
            indices.push_back(i); // pass the index of i to the return vector
            indices.push_back(it - nums.begin());          
            return indices; 
            }          
        }
            
        return indices;  
            
        
    }
};