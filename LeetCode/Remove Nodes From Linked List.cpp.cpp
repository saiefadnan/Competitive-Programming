#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  
#define ll int 

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(!head->next)return head;
        head->next=removeNodes(head->next);
        if(head->val<head->next->val)return head->next;
        return head;
    }
};

int main(){
    fastio
    ListNode* head=NULL;
    ListNode* temp=NULL;
    int arr[]={5,2,13,3,8};
    for(int i=0;i<5;++i){
        ListNode *v=new ListNode(arr[i]);
        if(!head)head=temp=v;
        else{
            temp->next=v;
            temp=temp->next;
        }
    }
    head=Solution().removeNodes(head);
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}
