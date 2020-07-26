/*
Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
*/

class Solution {
public:
    int addDigits(int num) {
        if(num<10)
            return num;
        else
        {
            int f=1;
            int s=0;
            int n=num;
            while(n>0||s>9)
            {
                if(n==0)
                {
                    n=s;
                    s=0;
                }
                int d=n%10;
                s=s+d;
                n=n/10;
                
            }
            
            return s;
        }
    }
};
