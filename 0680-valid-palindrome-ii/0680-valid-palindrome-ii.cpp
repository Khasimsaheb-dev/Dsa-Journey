class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                return ispol(s, left + 1, right) || ispol(s, left, right - 1);
            } else {
                left++;
                right--;
            }
          
        }
          return true;
    }

        bool ispol(string & s, int left, int right) {
            while (left < right) {
                if (s[left] != s[right]) {
                    return false;
                } else {
                    left++;
                    right--;
                }
            }
            return true;
        }

    };