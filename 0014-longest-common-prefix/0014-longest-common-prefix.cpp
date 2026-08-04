class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string first=strs[0];
        int n=strs.size();
        string last=strs[n-1];
    string ans="";
        int minlen=min(first.length(),last.length());
        for(int i=0;i<minlen;i++){
            if(first[i]!=last[i]){
                break;
            }
            else{
ans+=first[i];
            }
        }
        return ans;
    }

};