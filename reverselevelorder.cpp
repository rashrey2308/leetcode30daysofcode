/**Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).
For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]*/

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

#include <queue>
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> lot;
        
        if(root==NULL)
            return lot;
       
        queue <TreeNode*> q;
        q.push(root);
        vector<int> temp;
        while(!q.empty())
        {
            int n = q.size();
            while(n!=0)
            {
                TreeNode* ne=q.front();
                temp.push_back(ne->val);
                q.pop();
                if(ne->left != NULL)    
                q.push(ne->left);
                if(ne->right!= NULL)    
                q.push(ne->right);
                n-- ;
            }
            lot.insert(lot.begin(),temp);
            temp.resize(0);
        }
        return lot;
    }
};
