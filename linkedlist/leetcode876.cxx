class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            size++;
            temp = temp->next;
        }
        int n = size;
        temp = head;
        for(int i = 0 ;i<(n/2);i++){
            temp = temp->next;
        }
        head = temp;
        return head;
    }
};