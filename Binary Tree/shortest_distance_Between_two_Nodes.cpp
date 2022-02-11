#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};


struct Node* lca(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }

    if(root->data==n1 || root->data==n2){
        return root;
    }

    Node* left=lca(root->left,n1,n2);
    Node* right=lca(root->right,n1,n2);
    if(left!=NULL && right!=NULL){
        return root;
    }
    if(left==NULL&&right==NULL){
        return NULL;
    }
    if(left!=NULL){
        return lca(root->left,n1,n2);
    }
    return lca(root->right,n1,n2);

}
int finddist(Node* root,int k,int dist){
    if(root==NULL){
        return -1;
    }
    if(root->data==k){
        return dist;
    }
    int left=finddist(root->left,k,dist+1);
    if(left!=-1){
        return left;
    }
    return finddist(root->right,k,dist+1);
}

int distbet(Node* root,int n1,int n2)
{
    Node* temp=lca(root,n1,n2);
    int d1=finddist(temp,n1,0);
    int d2=finddist(temp,n2,0);
    return d1+d2;
}


int main(){
    struct Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

   cout<<distbet(root,4,7);
    return 0;


    //       1
    //     /  \
    //    2    3
}