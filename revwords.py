''' 
Given an input string, reverse the string word by word.
Example 1:

Input: "  hello world!  "
Output: "world! hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
'''

class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        w=s.split();
        s=''
        for i in w:
            s=i+" "+s
        s=s.rstrip()    
        return s;    
            
        
