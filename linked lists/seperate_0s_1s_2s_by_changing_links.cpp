class Solution {
public:
    // Function to sort linked list of 0s, 1s, and 2s by rearranging the links
    void sortZeroOneTwo(LinkedList& ll) {
        // Create dummy nodes for three lists: 0s, 1s, and 2s
        Node* zeroDummy = new Node(-1);
        Node* oneDummy = new Node(-1);
        Node* twoDummy = new Node(-1);

        // Tail pointers to build each of the lists
        Node* zeroTail = zeroDummy;
        Node* oneTail = oneDummy;
        Node* twoTail = twoDummy;

        // Traverse original list and distribute nodes into 0s, 1s, or 2s list
        Node* curr = ll.head;
        while (curr) {
            if (curr->data == 0) {
                zeroTail->next = curr;
                zeroTail = zeroTail->next;
            } else if (curr->data == 1) {
                oneTail->next = curr;
                oneTail = oneTail->next;
            } else {
                twoTail->next = curr;
                twoTail = twoTail->next;
            }
            curr = curr->next;
        }

        // Connect the three lists:
        // zeroTail -> oneDummy.next -> twoDummy.next
        // Handle edge cases if 0s or 1s list is empty
        zeroTail->next = oneDummy->next ? oneDummy->next : twoDummy->next;
        oneTail->next = twoDummy->next;
        twoTail->next = nullptr;  // end the list

        // Update head to new sorted list
        ll.head = zeroDummy->next;

        // Delete dummy nodes (they were placeholders)
        delete zeroDummy;
        delete oneDummy;
        delete twoDummy;
    }
};