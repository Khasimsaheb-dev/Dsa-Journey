class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int>jamal;
        for(int i=0;i<nums.size();i++){
            jamal[nums[i]]++;
        }

        for(auto it:jamal){
             if (it.second == 1) {
                return it.first;
            }
        }
        return -1;
    }
};