class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = max(word1.length(), word2.length());
        string ans = "";

        for (int i = 0; i < n; i++) {
            if (i < word1.length()) {
                ans.push_back(word1[i]);
            }

            if (i < word2.length()) {
                ans.push_back(word2[i]);
            }
        }

        return ans;
    }
};