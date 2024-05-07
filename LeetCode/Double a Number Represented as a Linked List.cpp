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
    int mult(ListNode* curr){
        if(!curr)return 0;
        int carry=mult(curr->next);
        int val=curr->val*2+carry;
        curr->val=val%10;
        return val/10;
    }
    ListNode* doubleIt(ListNode* head){
        int carry=mult(head);
        if(carry>0){
            ListNode* v=new ListNode(carry);
            v->next=head;
            head=v;
        }
        return head;
    }
};

int main(){
    fastio
    ListNode* head=NULL;
    ListNode* temp=NULL;
    int arr[]={9,9,9};
    for(int i=0;i<3;++i){
        ListNode *v=new ListNode(arr[i]);
        if(!head)head=temp=v;
        else{
            temp->next=v;
            temp=temp->next;
        }
    }
    head=Solution().doubleIt(head);
    while(head){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}
