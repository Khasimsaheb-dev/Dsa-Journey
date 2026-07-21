class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int crmax=nums[0];
        int crmin=nums[0];
        int maxi=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(crmax,crmin);
            }
            crmax=max(nums[i],crmax*nums[i]);
            crmin=min(nums[i],crmin*nums[i]);
            maxi=max(maxi,crmax);
        }
        return maxi;
    }
};