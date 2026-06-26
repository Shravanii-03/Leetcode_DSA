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
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* oddhead=nullptr;
        ListNode* evenhead=nullptr;
        ListNode* oddtail=nullptr; 
        ListNode* eventail=nullptr;
        ListNode* temp=head;

        int pos=1;
        while(temp!=nullptr){
             ListNode* nextnode=temp->next;
             temp->next=nullptr;
            if(pos%2==1){
                if(oddhead==nullptr){
                    oddhead=oddtail=temp;
                }
                else{
                    oddtail->next=temp;
                    oddtail=temp;
                }
            }

        else{
            if(evenhead==nullptr){
                    evenhead=eventail=temp;
                }
                else{
                    eventail->next=temp;
                    eventail=temp;
                }
        }
        temp=nextnode;
        pos++;
        }
        oddtail->next=evenhead;
        return oddhead;
    }
};