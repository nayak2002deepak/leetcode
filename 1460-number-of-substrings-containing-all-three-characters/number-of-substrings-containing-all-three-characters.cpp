class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int has[3]={-1,-1,-1};
        int cnt=0;

        for(int i=0;i<n;i++){
           has[s[i]-'a']=i;
          
           if(has[0]!=-1 && has[1]!=-1 && has[2]!=-1){
            cnt+=1+min(has[0],min(has[1],has[2]));
           }
        }
        return cnt;
    }
};