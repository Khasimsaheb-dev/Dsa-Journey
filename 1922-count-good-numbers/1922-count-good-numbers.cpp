class Solution {
public:
long long modpow(long long base,long long exp){
    long long MOD=1000000007;
    long ans=1;
    while(exp>0){
        if(exp%2==1){
            ans=(ans*base)%MOD;
        }
        base=(base*base)%MOD;
        exp/=2;
    }
    return ans;
}
    int countGoodNumbers(long long n) {
        long long MOD=1000000007;

        long even=(n+1)/2;
        long odd=(n)/2;
        return (modpow(5,even)*(modpow(4,odd)))%MOD;
    }
};