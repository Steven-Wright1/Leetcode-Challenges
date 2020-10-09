class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int Kth_Largest_Element; 

        sort(nums.begin(), nums.end());
            for(int i = 0; i < nums.size(); i++)
            cout << nums[i] << endl; 

        
        
        Kth_Largest_Element = nums[nums.size()-k];

        return Kth_Largest_Element;

    }
};