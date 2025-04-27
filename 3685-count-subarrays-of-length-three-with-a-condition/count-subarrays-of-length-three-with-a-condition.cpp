class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n=nums.size();

        int i=0;
        int j=2;
        int ans=0;
        while(j<n){
            int sum=0;
            sum+=nums[i];
            sum+=nums[j];
           if(2*sum==nums[i+1]){
            ans++;
           }
           i++;
           j++;
        }
        return ans;
        
    }
};