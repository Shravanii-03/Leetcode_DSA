#brute
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
    ListNode* sortList(ListNode* head) {
        vector<int>vt;
        ListNode* temp=head;

        while(temp!=nullptr){
            vt.push_back(temp->val);
            temp=temp->next;
        }

        sort(vt.begin(),vt.end());
        temp=head;
        for(int i=0;i<vt.size();i++){
            temp->val=vt[i];
            temp=temp->next;
        }
        return head;
    }
};


#optimal
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
    ListNode* sortList(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* temp=head;

        if(head==nullptr || head->next==nullptr){
            return head;
        }

        while(fast!=nullptr && fast->next!=nullptr){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
    temp->next=nullptr;
        ListNode* left=sortList(head);
        ListNode* right=sortList(slow);
        return mergelist(left,right);

    }

    ListNode* mergelist(ListNode* left, ListNode* right){
        ListNode* ptr=new ListNode(0);
        ListNode* curr= ptr;

        while(left!=nullptr && right!=nullptr){
            if(left->val<=right->val){
                curr->next=left;
                left=left->next;
            }
            else{
                curr->next=right;
                right=right->next;
            }

            curr=curr->next;
        }
         if(left != nullptr)
        {
            curr -> next = left;
            left = left->next;
        }
        
        if(right != nullptr)
        {
            curr -> next = right;
            right = right ->next;
        }
        return ptr->next;
    }
};