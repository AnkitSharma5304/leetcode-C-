/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
      vector<vector<int>> ans(m , vector<int>(n,-1));
      int id=0;
      int left=0;
      int right=n-1;
      int top=0;
      int down=m-1;
      while(top<=down && left<=right){
        if(id==0){
            for(int i=left ; head!=NULL && i<=right ; i++){
                ans[top][i]=head->val;
                head=head->next;
            }
            top++;
        }
        else if(id==1){
            for(int i=top ; head!=NULL && i<=down ; i++){
                ans[i][right]=head->val;
                head=head->next;
            }
            right--;
        }
        else if(id==2){
            for(int i=right ; head!=NULL && i>=left ; i--){
                ans[down][i]=head->val;
                head=head->next;
            }
            down--;
        }
        else if(id==3){
            for(int i=down ;  head!=NULL && i>=top ; i--){
                ans[i][left]=head->val;
                head=head->next;
            }
            left++;
        }
       id=(id+1)%4;
      }
      return ans;
    }
};