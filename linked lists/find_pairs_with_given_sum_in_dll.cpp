#brute
/*
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* prev; 

    ListNode(int value) : val(value), next(nullptr), prev(nullptr) {}

    ~ListNode() {
        delete next;
    }
};
*/

class Solution {
public:
    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
      ListNode* temp1=head;
       vector<vector<int>> st;

      while(temp1!=nullptr){
        ListNode* temp2=temp1->next;
        while(temp2!=nullptr){
        if(temp1->val+temp2->val==target){
            st.push_back({temp1->val, temp2->val});

        }
        temp2=temp2->next;

        }
        temp1=temp1->next;
      }
        return st;
    }
};


#optimal
/*
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* prev; 

    ListNode(int value) : val(value), next(nullptr), prev(nullptr) {}

    ~ListNode() {
        delete next;
    }
};
*/

 ListNode* findtail(ListNode* head){
    ListNode* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    return temp;
}

class Solution {
public:
    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
      ListNode* left=head;
       vector<vector<int>> st;
       ListNode* right=findtail(head);

        while(left->val<right->val){
            if(left->val+right->val==target){
                st.push_back({left, right});
                left=left->next;
                right=right->prev;
            }
            else if(left->val+right->val<target){
               
                left=left->next;
            }
            else {
                right=right->prev;
            }
        }

        return st;
    }
};
