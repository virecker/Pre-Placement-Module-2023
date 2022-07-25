class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head){
        ListNode *temp = head -> next;
        ListNode * prev = head;
        while(temp != NULL){
            if(prev -> val == temp -> val){
               ListNode *temp2 =  temp;
                prev-> next = temp -> next;
                temp  = temp -> next;
                delete(temp2);
            }else{
                prev = temp;
                temp = temp -> next;
            }
            
        }
        }
        return head;
        
    }
};