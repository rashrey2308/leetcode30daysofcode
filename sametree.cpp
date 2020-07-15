/*
Given two binary trees, write a function to check if they are the same or not.
Two binary trees are considered the same if they are structurally identical and the nodes have the same value.

Example 1:
Input:     1         1
          /           \
         2             2

        [1,2],     [1,null,2]
Output: false
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
   
    bool isSameTree(TreeNode* p, TreeNode* q) {
     if(p==NULL && q==NULL)
         return true;
     else if((p!=NULL && q==NULL) || (p==NULL && q!=NULL)) 
         return false;
     else
     {
         if(p->val==q->val)
            return (isSameTree(p->left,q->left)&& isSameTree(p->right,q->right));
         else
             return false;
     }
    }
};