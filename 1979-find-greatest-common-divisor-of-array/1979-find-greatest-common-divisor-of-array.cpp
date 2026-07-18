class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=nums[0];
        int max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<min){
                min=nums[i];
            }
            if(nums[i]>max){
                max=nums[i];
            }
        }
        int res=1;
        for(int i=1;i<=min;i++){
            if(min%i ==0&& max%i==0){
             res=i;
            } 
        }
        return res;
    }
};