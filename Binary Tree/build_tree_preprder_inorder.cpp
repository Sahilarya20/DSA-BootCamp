#include "bits/stdc++.h"

using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
// .......................SEARCH ALGORITHIM...........................
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
// ...........................BUILD TREEE...................................
struct node* buildtree(int preorder[],int inorder[],int start, int end){
     static int idx=0;
     if(start>end){
         return NULL;
     }

     int curr=preorder[idx];
     idx++;

     struct node* op=new node(curr);
    if(start==end){
        return op;
    }
     int pos=search(inorder,start,end,curr);
     op->left=buildtree(preorder,inorder,start,pos-1);
     op->right=buildtree(preorder,inorder,pos+1,end);
     return op;
}
void inorderprint(struct node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}





int main(){
    
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};


    struct node* root=buildtree(preorder,inorder,0,4);
    inorderprint(root);
    cout<<endl;

    return 0;

}
