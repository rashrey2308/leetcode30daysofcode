/*he Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.
Note:
0 ≤ x, y < 231.

Example:

Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.*/

#include <cstdlib>
class Solution {
public:
    vector <int> d2b(int n) //To convert from decimal to binary
    {
        vector<int> a;
        while(n!=0)
        {
            a.insert(a.begin(),n%2);
            n=n/2;
        }
        return a;
    }
    int hammingDistance(int x, int y) {
        vector<int> x1=d2b(x);
        vector<int> x2=d2b(y);
        
        int s1=x1.size();
        int s2=x2.size();
        
        int n=0;

        if(s1>s2)
        {
             for(int i=s2-1;i>=0;i--)
            {
                if(x2[i]!=x1[s1-1])
                    n++;
                s1--;
            }
            for(int i=s1-1;i>=0;i--)
            {
                if(x1[i]==1)
                    n++;
            }
           
        }
        else
        {
            for(int i=s1-1;i>=0;i--)
            {
                if(x1[i]!=x2[s2-1])
                    n++;
                s2--;
            }
            for(int i=s2-1;i>=0;i--)
            {
                if(x2[i]==1)
                    n++;
            }
        }
        return n;
    }
};
