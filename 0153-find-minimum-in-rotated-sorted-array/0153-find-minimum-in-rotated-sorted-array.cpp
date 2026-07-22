class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int min=nums[0];
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+high-low/2;
            if(nums[mid]<min){
                min=nums[mid];
            }
            else if(nums[mid]>min){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return min;
    }
};