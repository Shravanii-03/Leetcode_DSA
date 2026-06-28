/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode * removeDuplicates(ListNode *head) {
    ListNode* temp=head;

    if(head==nullptr || head->next==nullptr){
        return head;
    }
    while(temp!=nullptr && temp->next!=nullptr){
        if(temp->val==temp->next->val){
        ListNode* duplicate = temp->next;
        temp->next=duplicate->next;
        duplicate->next->prev=temp;

        delete (duplicate);
        }

        else{
            temp=temp->next;
        }
    }
    
    return head;
    }
};