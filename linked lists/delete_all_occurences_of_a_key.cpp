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
    ListNode* deleteAllOccurrences(ListNode* head, int target) {

        if (head == nullptr)
            return head;

        ListNode* temp = head;

        while (temp != nullptr) {

            ListNode* prevnode = temp->prev;
            ListNode* nextnode = temp->next;

            if (temp->val == target) {

                if (temp == head) {
                    head = head->next;
                }

                if (prevnode)
                    prevnode->next = nextnode;

                if (nextnode)
                    nextnode->prev = prevnode;

                delete temp;
                temp = nextnode;
            }
            else {
                temp = temp->next;
            }
        }

        return head;
    }
};