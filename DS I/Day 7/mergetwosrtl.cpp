class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        while(list1!=NULL){
            v.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=NULL){
            v.push_back(list2->val);
            list2=list2->next;
        }
        sort(v.begin(),v.end());
        if(v.size()==0)     
            return NULL;
         ListNode *curr=new ListNode(v[0]);
        ListNode * head=curr;
       
        // head=head->next;
        for(int i=1;i<v.size();i++){
           head->next=new ListNode(v[i]);
            head=head->next;
        }
      
       return curr;
    
    }
};