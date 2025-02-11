class Solution {
public:
    bool find(int i,int d,vector<int>& s,int n,vector<vector<int>>& dp){
        if(i==n-1) return true;
        if(dp[i][d]!=-1) return dp[i][d];
         for(int j=-1;j<=1;j++){
            for(int k=i+1;k<n;k++){
                if(s[i]+j+d==s[k]){
                    if(find(k,d+j,s,n,dp)){
                        return dp[i][d]= true;
                    }
                }
            }
         }
         return dp[i][d]=false;
    }
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        if(stones[0]+1!=stones[1]) return false;
        return find(1,1,stones,stones.size(),dp);
        
    }
};