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

void flattern(Node* root){
    if(root==NULL||(root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->left!=NULL){
        flattern(root->left);
        Node* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        
        Node* t=root->right;
        while(t->right!=NULL){
            t=t->right;

        }
        t->right=temp;
        
    }
    flattern(root->right);
}


void inorderprint(Node* root){
    if(root==NULL){
        return;

    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}
int main(){
    struct Node* root= new Node(4);
    root->left=new Node(9);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);

   flattern(root);
   inorderprint(root);
    return 0;


    //       1
    //     /  \
    //    2    3
}