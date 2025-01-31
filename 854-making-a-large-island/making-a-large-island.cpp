 class DisjointSet{
     public: 
     vector<int> parent ,size;
     DisjointSet(int n){
     parent.resize(n+1);
     size.resize(n+1,1);
     for(int i=0;i<n;i++){
     parent[i]=i;}
     }
     int findUpar(int node){
         if(node==parent[node]){
             return node;
         }
         return parent[node]=findUpar(parent[node]);
     }
     void unionBySize(int u,int v){
         int ulp_u=findUpar(u);
         int ulp_v=findUpar(v);
         if(ulp_u==ulp_v) return;
         if(size[ulp_u]<size[ulp_v]){
              parent[ulp_u]=ulp_v;
              size[ulp_v]+=size[ulp_u];
         }
         else{
              parent[ulp_v]=ulp_u;
              size[ulp_u]+=size[ulp_v];

         }
     }

 };
class Solution {
public:
    bool isValid(int r,int c,int n,int m){
        return r>=0 && r<n && c>=0 && c<m;
    }
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        DisjointSet ds(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) continue;
                int dx[4]={0,0,-1,1};
                int dy[4]={-1,1,0,0};
                for(int t=0;t<4;t++){
                    int nr=i+dx[t];
                    int nc=j+dy[t];
                    if(isValid(nr,nc,n,n) && grid[nr][nc]==1){
                      int node=i*n+j;
                      int newNode=nr*n+nc;
                      ds.unionBySize(node,newNode);
                    }
                }
            }
        }
        int mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) continue;
                int dx[4]={0,0,-1,1};
                int dy[4]={-1,1,0,0};
                set<int> component;
                for(int t=0;t<4;t++){
                    int nr=i+dx[t];
                    int nc=j+dy[t];
                    if(isValid(nr,nc,n,n)){
                        if(grid[nr][nc]==1){
                            component.insert(ds.findUpar(nr*n+nc));
                        }
                    }
                    int size=0;
                    for(auto it:component){
                       size+=ds.size[it];
                    }
                    mx=max(mx,size+1);
                }
            }
        }
        for(int i=0;i<n*n;i++){
            mx=max(mx,ds.size[ds.findUpar(i)]);
        }
        return mx;
    }
};