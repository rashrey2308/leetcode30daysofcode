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
