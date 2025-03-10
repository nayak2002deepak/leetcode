class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {

        int n1=nums1.size();
        int n2=nums2.size();

        vector<vector<int>> ans;
        int i=0;
        int j=0;
        int k=0;
        while(i<n1 && j<n2){
            if(nums1[i][0]==nums2[j][0]){
                ans.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
               // ans[k].push_back(nums1[i][1]+nums2[j][1]);
                i++;
                j++;
                k++;

            }
            else if(nums1[i][0]<nums2[j][0]){
                  ans.push_back({nums1[i][0],nums1[i][1]});
               // ans[k].push_back(nums1[i][1]);
                i++;
              //  j++;
                k++;
            }
            else{
                 ans.push_back({nums2[j][0],nums2[j][1]});
                //ans[k].push_back(nums2[j][1]);
                //i++;
                j++;
                k++;

            }
        }

        while(i<n1){
              ans.push_back({nums1[i][0],nums1[i][1]});

                i++;
              //  j++;
                k++;
        }
         while(j<n2){
             ans.push_back({nums2[j][0],nums2[j][1]});

                //i++;
                j++;
                k++;
        }
        return ans;
        
    }
};