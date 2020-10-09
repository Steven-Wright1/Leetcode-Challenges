class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){
        map<int, int> myMap; 
        vector<int> arr(2); 

        for(int i = 0; i < nums.size(); i++)
            myMap[nums[i]] = i;                 // Saves the array as 0,1,2,3 ... etc. Mapping the array in this way can ensure that elements are not repeated. 

        for(int i = 0; i < nums.size(); i++){
            int comp = target - nums[i];        // Allows us to find the complementary element in the array
            if(myMap[comp] && myMap[comp] != i){
                arr[0] = i; 
                arr[1] = myMap[comp]; 
                }
            }
            return arr;

    }
};