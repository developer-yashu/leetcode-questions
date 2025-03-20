class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i]) - 1; // Find index corresponding to value
            
            if (nums[index] < 0) {
                result.push_back(abs(nums[i]));  // Number is already negative, meaning it's a duplicate
            } else {
                nums[index] = -nums[index];  // Mark as visited
            }
        }
        
        return result;
    }
};

  