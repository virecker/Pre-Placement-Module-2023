class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode * ptr=head;
        int n=INT_MIN;
        while(ptr!=NULL)
        {
            if(ptr->val>n)
            {
                ptr->val=n;
                ptr=ptr->next;
            }
            else
                return 1;
        }
        return 0;
    }
};