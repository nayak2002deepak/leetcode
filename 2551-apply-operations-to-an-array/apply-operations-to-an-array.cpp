class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {

        vector<int> ans;

        int n=nums.size();

        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=2*nums[i];
                nums[i+1]=0;

            }
        }
         int cnt=0;
        for(int i=0;i<n;i++){
          if(nums[i]!=0){
            ans.push_back(nums[i]);

          }else{
            cnt++;
          }
        }
        for(int i=0;i<cnt;i++){
            ans.push_back(0);
        }
        return ans;
    }
};