class Solution {
public:
    bool isAnagram(string s, string t) {
        
 if (s.length() != t.length())
            return false;
vector<int>frq1(26,0);
vector<int>frq2(26,0);


for(int i=0;i<s.length();i++){
    frq2[t[i]-'a']++;
     frq1[s[i]-'a']++;
}


       for (int i = 0; i < 26; i++) {
    if (frq1[i] != frq2[i])
        return false;
}
return true;
    }
};