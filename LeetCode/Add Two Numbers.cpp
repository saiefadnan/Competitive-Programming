#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=new ListNode();
        auto temp=l3;
        ll carry=0;
        while(l1 || l2 || carry){
            if(l1 && l2){
                temp->val=(l1->val+l2->val+carry)%10;
                carry=(l1->val+l2->val+carry)/10;
                l1=l1->next;
                l2=l2->next;
            }
            else if(l1){
                temp->val=(l1->val+carry)%10;
                carry=(l1->val+carry)/10;
                l1=l1->next;
            }
            else if(l2){
                temp->val=(l2->val+carry)%10;
                carry=(l2->val+carry)/10;
                l2=l2->next;
            }
            else{
                temp->val=carry;
                carry=0;
            }
            
            if(l1 || l2 || carry){
                temp->next=new ListNode();
                temp=temp->next;
            }
        }
        return l3;
    }
};

int main(){
    fastio
    Solution s;
    ListNode *l1=new ListNode();
    ListNode *l2=new ListNode();
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;++i)cin>>arr[i];
    ListNode *temp=new ListNode();
    temp=l1;
    for(ll i=0;i<n;++i){
        temp->val=arr[i];
        if(i==n-1)break;
        temp->next=new ListNode();
        temp=temp->next;

    }
    ll n1;
    cin>>n1;
    ll arr1[n1];
    for(ll i=0;i<n1;++i)cin>>arr1[i];
    ListNode *temp1=new ListNode();
    temp1=l2;
    for(ll i=0;i<n1;++i){
        temp1->val=arr1[i];
        if(i==n1-1)break;
        temp1->next=new ListNode();
        temp1=temp1->next;

    }
    temp=s.addTwoNumbers(l1,l2);
    cout<<"\n";
    while(temp){
        cout<<temp->val<<" ";
        temp=temp->next;
    };
    return 0;
}