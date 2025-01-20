class Solution {
public:
    
   
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {

        int t=arr.size();

        int n=mat.size();
        int m=mat[0].size();
        int l=max(n,m);
        vector<int> row(n,0);
        vector<int> col(m,0);
        unordered_map<int,pair<int,int>> mpp;
         for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
            mpp[mat[i][j]]={i,j};
         }
        }

        for(int i=0;i<t;i++){

            pair<int,int> p=mpp[arr[i]];
            int f=p.first;
            int s=p.second;
            row[f]++;
            col[s]++;
            if(row[f]==m || col[s]==n){
                return i;
            }
            
        }
        return -1;
        
    }
};