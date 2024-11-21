#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };


bool hasCycle(ListNode *head) {
        map<ListNode*,int> mpp;
        ListNode* temp = head;

        while(temp != NULL){
            if(mpp.find(temp) != mpp.end()){
                return true;
            }
            mpp[temp] = 1;

            temp = temp -> next;
        }

        return false;
    }

bool hasCycleOptimal(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast) return true;
        }
        return false;
    }