class Solution {
public:
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        unordered_map<int,priority_queue<int>> temp;

        for(int i=0;i<n;i++){
            int sum=0;
            int t=nums[i];

            while(t){
                sum+=t%10;
                t=t/10;
            }
            temp[sum].push(nums[i]);
        }
       
       for(auto it : temp){
        if(it.second.size()>=2){
            int i=it.second.top();
            it.second.pop();
            int i1=it.second.top();
          ans=max(ans,i+i1);
        }
       }
       return ans;
        
    }
};