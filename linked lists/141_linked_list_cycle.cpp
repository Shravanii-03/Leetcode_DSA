#brute force
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * temp=head;
        unordered_map<ListNode*, int > nodemap;
        while(temp!=nullptr){
            if(nodemap.find(temp)!=nodemap.end()){
                return true;
                nodemap[temp]=1;
                temp=temp->next;
            }
        }
    
                return false;
    
    }
};



#optimal (tortoise and hare)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }

    }
    
    return false;
    }
};
