class Solution {
public:
int product(int n){
    int prd=1;
    while(n>0){
         prd *=(n%10);
        n=n/10;
    }
    return prd;
}
    int smallestNumber(int n, int t) {
       
    while(true){
        int    ans=product(n);
            if(ans%t !=0){
               n++;
            }
            else{
                return n;
            }
            
        }
        return -1;
    }
};
