class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int ,int> hash;
        for(int num:nums){
            hash[num]++;
        }
        int n=nums.size();
        int maxi=0;
        for(auto i: hash){
            maxi=max(maxi, i.second);
        }
        int ans=0;
        for(auto i:hash){
            if(i.second==maxi){
                ans +=i.second;
            }
        }
        return ans;
    }
};