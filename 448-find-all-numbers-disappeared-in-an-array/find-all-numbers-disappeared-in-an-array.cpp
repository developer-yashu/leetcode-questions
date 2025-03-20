class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        
        // Mark visited indices as negative
        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1;
            nums[index] = -abs(nums[index]); // Mark as visited
        }

        // Collect indices that are still positive
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1); // Convert index to number
            }
        }

        return result;
    }
};