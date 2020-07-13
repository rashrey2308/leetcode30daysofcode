/*
Write a program to find the n-th ugly number.
Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 

Example:

Input: n = 10
Output: 12
Explanation: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.
Note:  1 is typically treated as an ugly number.
*/

class Solution {
public:   
    
    int nthUglyNumber(int n) {
        int ugly=1;
        int u[n];
        if(n==1) return 1;
        int u2=2,i2=0;
        int u3=3,i3=0;
        int u5=5,i5=0;
    
        for(int i=1;i<n;i++)
        {
            ugly=min(u2,min(u3,u5));
            u[i]=ugly;
            if(ugly==u2)
            {
                i2++;
                u2=u[i2]*2;
            }
            if(ugly==u5)
            {
                i5++;
                u5=u[i5]*5;
            }
            if(ugly==u3)
            {
                i3++;
                u3=u[i3]*3;
            }
            
        }
        return ugly;
    }
};
