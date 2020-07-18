/*Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.
Note:
The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],
A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
] */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> s;
        if(nums.size()<3)return s;
        sort(nums.begin(),nums.end());
        int l=0,r=0;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]>0) break;
            l=i+1;
            r=nums.size()-1;
            while(l<r)
            {
                if(nums[l]+nums[r]==-nums[i])
                {
                    
                    s.push_back({nums[i],nums[l],nums[r]});
                    while(nums[i+1]==nums[i]&&i<nums.size()-2)
                      i++;
                    while(l<r && nums[l]==nums[l+1])
                        l++;
                    while(l<r && nums[r]==nums[r-1])
                        r--;
                    l++;
                    r--;
                }
                else if((nums[l]+nums[r])>-nums[i])
                    r--;
                else
                    l++;
            }
        }
       // s.erase(unique(s.begin(),s.end()),s.end());
       
        return s;
    }
};
