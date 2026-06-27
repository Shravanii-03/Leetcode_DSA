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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
         int mid=count/2;
        temp=head;
        for(int i=1;i<mid;i++){
            temp=temp->next;
        }

        temp->next=temp->next->next;
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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* prev=nullptr;
        ListNode* slow=head;
        ListNode* fast=head;


        if(head==nullptr || head->next==nullptr){
            return nullptr;
        }
        
        while(fast!=nullptr && fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }

        
        prev->next=slow->next;

        delete slow;
        return head;
    }
};

