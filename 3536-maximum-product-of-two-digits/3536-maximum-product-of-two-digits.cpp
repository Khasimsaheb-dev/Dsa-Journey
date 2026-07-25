class Solution {
public:
    int maxProduct(int n) {
        
        
         int first=0;
         int sec=0;

        while (n > 0) {
            int digit = n % 10;
            if(digit>=first){
                sec=first;
                first=digit;

            }
            else if(digit>sec){
                sec=digit;
            }
            n/=10;
        }
        return first*sec;
    }
};