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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* ans=head;
        ListNode* fp=head,*sp=head;
        ListNode* pv=head;
        if(fp->next==NULL) return NULL;
        while(fp->next!=NULL){
            if(fp->next->next==NULL){
                fp=fp->next;
            }
            else
            fp=fp->next->next;
            
            pv=sp;
            sp=sp->next;
            
        }
        pv->next=sp->next;
        
        return ans;
    }
};
