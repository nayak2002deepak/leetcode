class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n=nums.size();

        int cnt=-1;
        int cnt1=-1;
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=e+(s-e)/2;
            if(nums[mid]>=0){
                cnt=mid;
             e=mid-1;
            }else{
                s=mid+1;
            }
        }
        s=0;
        e=n-1;
         while(s<=e){
            int mid=e+(s-e)/2;
            if(nums[mid]<=0){
                cnt1=mid;
            s=mid+1;
            }else{
                e=mid-1;
            }
        }

       if(cnt==-1) return n;
        return max(cnt,n-cnt1-1);

        
    }
};