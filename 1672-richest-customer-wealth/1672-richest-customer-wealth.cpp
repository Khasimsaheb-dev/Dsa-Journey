class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwelth=0;
        int m=accounts.size();
        int n=accounts[0].size();
        for(int i=0;i<m;i++){
int welth=0;
for(int j=0;j<n;j++){
    welth +=accounts[i][j];
}
if(welth>maxwelth){
    maxwelth=welth;
}
        }
        return maxwelth;
    }
};