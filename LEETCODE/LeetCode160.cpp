#include <bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp = headA;
        map<ListNode*,bool>mpp;

        while(temp != NULL){
            mpp[temp] = true;
            temp = temp->next;
        }

        temp = headB;

        while(temp != NULL){
            if(mpp[temp] == true){
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }