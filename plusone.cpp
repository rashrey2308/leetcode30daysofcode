/* Given a non-empty array of digits representing a non-negative integer, increment one to the integer.
The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=digits.size();
        if(digits[s-1]!=9)
        {
            digits[digits.size()-1]+=1;
            return digits;
        }
        else
        {
            vector<int> d=digits;
            int c=1,t=0;
            digits[s-1]=0;
            s--;
            while(c!=0)
            {
                if(s!=-1)
                {
                    t=d[s]+c;
                    digits[s]=t%10;
                    c=t/10;
                    s--;
                }
                else{
                    digits.insert(digits.begin(),c);
                    break;
                }
            }
            return digits;
        }
    }
};
