#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  
#define ll int 

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        while(node->next){
            node->val=node->next->val;
            if(!node->next->next)node->next=NULL;
            else node=node->next;
        }
    }
};

int main(){
    fastio
    ListNode* head=NULL;
    ListNode* node=NULL;
    ListNode* temp=NULL;
    int del=5;
    int arr[]={4,5,1,9};
    for(int i=0;i<4;++i){
        ListNode *v=new ListNode(arr[i]);
        if(!head)head=temp=v;
        else{
            temp->next=v;
            temp=temp->next;
        }
        if(arr[i]==del)node=v;
    }
    Solution().deleteNode(node);
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}
