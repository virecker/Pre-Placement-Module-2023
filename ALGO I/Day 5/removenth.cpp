class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
ListNode*curr=head;
int cnt=0;
while(curr){
curr=curr->next;
cnt++;
}
int length=cnt-n;
if(cnt==1){return NULL;}
if(n>=cnt){return head->next;}
curr=head;
for(int i=1;i<length;i++){
curr=curr->next;

    }
    curr->next=curr->next->next;
    return head;
}
};