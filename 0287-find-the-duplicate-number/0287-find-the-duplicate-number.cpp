class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>frq;
        for(int i=0;i<nums.size();i++){
            frq[nums[i]]++;
        }
         for(auto x : frq) {
            if(x.second > 1) {
                return x.first;
            }
        }

        
        return 0;
    }
};