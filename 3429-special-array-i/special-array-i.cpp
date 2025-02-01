class Solution {
public:
    bool check(int n){
        if(n%2==0) return true;
        return false;
    }
    bool isArraySpecial(vector<int>& nums) {
        
        int n=nums.size();
        
        if(nums.size()<=1) return true;
        
        for(int i=1;i<n;i++){
            
        if(check(nums[i-1])^check(nums[i])==0){
            return false;
        }
                
            
        }
        return true;
        
    }
};