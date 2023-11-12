class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* p1 = list1;
        ListNode* p2 = list2;
        if(p1 == NULL){
            return list2;
        }
        if(p2 == NULL){
            return list1;
        }
        if(p1->val < p2->val){
            p1->next = mergeTwoLists(p1->next, p2);
            return p1;
        }
        else{
            p2->next = mergeTwoLists(p1, p2->next);
            return p2;
        }
    }
};
