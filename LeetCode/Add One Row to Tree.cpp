#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

/**/
 //Definition for a binary tree node.
 struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 /**/
class Solution {
public:

    void traverse(TreeNode* root, int val, int depth){
        if(root==NULL)return;
        if(depth==1)return;
        addOneRow(root->left,val,depth-1);
        if(depth==2){
            TreeNode* node1=new TreeNode(val,root->left,NULL);
            root->left=node1; 
        }
        addOneRow(root->right,val,depth-1);
        if(depth==2){
            TreeNode* node2=new TreeNode(val,NULL,root->right);
            root->right=node2;
        }
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth>1)traverse(root,val,depth);
        else{
            TreeNode* node=new TreeNode(val,root,NULL);
            root=node;
        }
        return root;
    }
    void print(TreeNode* root){
        if(root==NULL)return;
        cout<<root->val<<" ";
        print(root->left);
        print(root->right);
    }
};

int main(){
    fastio
    ll arr[]={4,2,6,3,1,5};
    ll val=1,depth=2;
    TreeNode* root=new TreeNode(arr[0]);
    TreeNode* pr=root;
    for(ll i=1;i<6;++i){
        TreeNode* temp=root;
        TreeNode* node=new TreeNode(arr[i]);
        TreeNode* prev=root;
        while(temp){
            prev=temp;
            if(temp->val>=arr[i])temp=temp->left;
            else temp=temp->right;
        }
        if(prev->val>=arr[i])prev->left=node;
        else prev->right=node;
    }
    Solution().addOneRow(root,val,depth);
    Solution().print(pr);

}