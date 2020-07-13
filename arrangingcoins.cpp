/*You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.
Given n, find the total number of full staircase rows that can be formed.
n is a non-negative integer and fits within the range of a 32-bit signed integer.

Example:
n = 5
The coins can form the following rows:
¤
¤ ¤
¤ ¤
Because the 3rd row is incomplete, we return 2.*/

class Solution {
public:
    int arrangeCoins(int n) {
        int i=0;
        long s=0;
        while(s<=n)
        {
            i=i+1;
            s=s+i;
            
        }
        i=i-1;
        return i;
    }
};