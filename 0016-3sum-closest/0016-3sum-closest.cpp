class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int sum1=nums[i]+nums[left]+nums[right];
                if(abs(sum1-target)<abs(sum-target)){
                    sum=sum1;
                }

if(sum1<target){
    left++;
}
else if(sum1>target){
    right--;
}
else{
    return sum1;
}
            }
        }
        return sum;
        
    }
};