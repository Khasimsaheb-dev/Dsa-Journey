class Solution {
public:
    string frequencySort(string s) {
       unordered_map<char,int>frq;
        for(char c:s){
            frq[c]++;
        }
        vector<pair<char,int>>ans(frq.begin(),frq.end());
        
           sort(ans.begin(), ans.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });

        string result;
        for (auto &p : ans) {
            result.append(p.second, p.first); 
        }

        return result;
    }
};