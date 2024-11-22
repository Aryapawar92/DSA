#include<bits/stdc++.h>
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map <ListNode*,int> mpp;

        ListNode* temp = head;

        while(temp != NULL){
            if(mpp[temp] != 0){
                return temp;
            }
            mpp[temp] = 1;
            temp = temp -> next;
        }

        return nullptr;
    }

    ListNode *detectCycleOptimal(ListNode *head) {
        //map <ListNode*,int> mpp;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;

            if(fast == slow){
                slow = head;
                while(slow != fast){
                    slow = slow -> next;
                    fast = fast -> next;
                }
                return fast;
            }
        }

        return nullptr;
    }
};