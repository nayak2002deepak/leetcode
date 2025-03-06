class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_set<int> s;
        int a=0;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(s.find(grid[i][j])!=s.end()){

                  a=grid[i][j];
                  s.insert(grid[i][j]);
                }
                else{
                    sum+=grid[i][j];
                     s.insert(grid[i][j]);
                }

            }
        }

        int b=n*n*(1+n*n)/2-sum;

        return {a,b};
        
    }
};