class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();

        priority_queue<long long,vector<long long>,greater<long long>> pq;
        for(int i=0;i<n;i++){
           // if(nums[i]<k){
                pq.push(nums[i]);
           // }
        }
         int ans=0;
        while(pq.size()>=2 && pq.top()<k){
            long long  f=pq.top();
            pq.pop();
           // int s=0;
           long long s=pq.top();
            pq.pop();
          
            long long  add=2*f+s;
            pq.push(add);
            ans++;
        }
        return ans;
    }
};