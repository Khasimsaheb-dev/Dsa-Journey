class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int n = nums.size();

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(abs(nums[i]));
        }

        int mn = ans[0];
        int index = 0;

        for (int i = 1; i < n; i++) {
            if (ans[i] < mn) {
                mn = ans[i];
                index = i;
            }
            else if (ans[i] == mn && nums[i] > nums[index]) {
            
                index = i;
            }
        }

        return nums[index];
    }
};