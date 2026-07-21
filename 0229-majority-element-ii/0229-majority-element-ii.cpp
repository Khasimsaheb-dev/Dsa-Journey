class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>fq;
        for(int i=0;i<nums.size();i++){
            fq[nums[i]]++;
        }
        int n=nums.size();
        vector<int>ans;
        for(auto it:fq){
            if(it.second>(n/3)){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};