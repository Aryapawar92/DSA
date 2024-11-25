#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return head;

        ListNode* tail = head;

        //ListNode* temp = head;
        
        int l = 1;

        

        while(tail->next != NULL){
            tail = tail->next;
            l++;
        }

        if(k % l == 0) return head;

        tail->next = head;
        k = k % l;
        int dif = l - k;
        //int count = 1;

        while(dif--){
            tail= tail->next;
        }
        
        ListNode* newHead = tail->next;
        tail->next = NULL;

        return newHead;





    }