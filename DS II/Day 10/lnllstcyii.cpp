class Solution {
public:
ListNode *startOfCycle(ListNode *head,ListNode *large){
ListNode *small=head;
while(large->next!=small){
small=small->next;
large=large->next;
}
return small;
}
public:
ListNode *detectCycle(ListNode *head) {
if(head==NULL || head->next==head){
return head;
}
ListNode *small=head;
ListNode *large=head->next;
while(large!=NULL){
large=large->next;
if(large!=NULL){
large=large->next;
}
small=small->next;
if(large==small){
return startOfCycle(head,large);
}
}
return NULL;
}
};