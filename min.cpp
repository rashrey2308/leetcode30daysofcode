/*
Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e.,  [0,1,2,4,5,6,7] might become  [4,5,6,7,0,1,2]).

Find the minimum element.

The array may contain duplicates.
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l= 0;
        int h= nums.size()-1;
        
        while(l < h)
        {
            int m = (l+h)/2;

            if(nums[h] < nums[m])
            {
                l = m+1;
            }
            else if(nums[h] > nums[m])
            {
                h = m;
            }
            else 
            {
                h--;
            }
            
        }
        return nums[l];
    }
};
