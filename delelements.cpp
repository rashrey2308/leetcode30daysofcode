/* 
Remove all elements from a linked list of integers that have value val.

Example:
Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *root=head;
        if(root==NULL)
            return root;
        else if(root->next==NULL)
        {
            if(root->val!=val)
                return root;
            else
            {
                head==NULL;
                return NULL;
            }
        }
        else
        { 
            

            while(root->next)
            {
                if(root->next->val==val)
                {
                    ListNode *temp=root->next;
                    root->next=root->next->next;
                    delete(temp);
                }
                else
                root=root->next;
            }
            if(head->val==val)
            {
                ListNode *temp=head;
                head=temp->next;
                delete(temp);
            }
            
            return head;
            
            
        }
    }
};
