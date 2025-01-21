class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long n=grid.size();
        long long m=grid[0].size();
        long long second=0;
        long long pre=0;
        long long sum=accumulate(grid[0].begin(),grid[0].end(),0LL);
        long long ans=LLONG_MAX;

        
        for(int j=0;j<m;j++){
          sum-=grid[0][j];
          long long mini=max(pre,sum);
          ans=min(ans,mini);
          pre+=grid[1][j];

        }
        return ans;
        

        
    }
};