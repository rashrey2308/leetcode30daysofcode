/* 
Given two binary strings, return their sum (also a binary string).
The input strings are both non-empty and contains only characters 1 or 0.

Example 1:
Input: a = "11", b = "1"
Output: "100"
*/

class Solution {
public:
        string addBinary(string a, string b)
    {
        int s1 = a.length();
        int s2 = b.length();
        int i = 0,carry = 0;

        string s = "";

        while(i < s1 || i < s2 || carry != 0)
        {
            int x = 0, y = 0;

            if(i < s1 && a[s1-1-i] == '1')
                x = 1;

            if(i < s2 && b[s2-1-i] == '1')
                y = 1;
             s=to_string((x+y+carry)%2)+s;
            
            carry = (x+y+carry)/2;
            i++;
        }
        
        return s;
    }
};
