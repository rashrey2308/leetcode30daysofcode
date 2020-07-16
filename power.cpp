/*
Implement pow(x, n), which calculates x raised to the power n (x^n).

Example 1:
Input: 2.00000, -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
*/

class Solution {
public:
    double power(double x, int n)
    {
        if(n==0)
            return 1;
        double p=power(x,n/2);
        
        if(n%2==0)
            return p*p;
        else
            return p*p*x;
            
    }
    double myPow(double x, int n) {
        long n1=n;
        if(n==1)
            return x;
        if(n==0)
            return 1;
        if(n>0)
            return(power(x,n1));
        else 
        {
            double s=(power(1/x,-n1));
            return s;
        }
        
        
    }
};
