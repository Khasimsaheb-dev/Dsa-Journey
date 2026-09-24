class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
       
        int minidx=INT_MAX;
       
           for(int j=0;j<n;j++){
            if(nums[j]<=9){
                if(nums[j]==j){
                    minidx=min(minidx,j);
                }
            }
            if(nums[j]>9){
                int da=nums[j];
                int sum=0;
                while(da>0){
                    int digit=da%10;
                     sum+=digit;
                     da/=10;
                }
                if(sum==j){
                    minidx=min(minidx,j);
                }
            }
           }
            if (minidx == INT_MAX)
            return -1;

        return minidx;
        }
        
    
};