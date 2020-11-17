class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res = 0; 
        
        ListNode* temp = head; 
        while(temp != NULL){
            res <<= 1;
            res += temp->val; 
            temp = temp->next;
        }
        return res;
    }
};