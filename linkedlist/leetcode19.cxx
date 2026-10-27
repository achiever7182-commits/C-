class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int size = 0;
        while(temp!=NULL){
            temp = temp->next;
            size++;
        }
        if(size == n) return head->next;
        temp = head;
        for(int i = 1;i<size-n;i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};