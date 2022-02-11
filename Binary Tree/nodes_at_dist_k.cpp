#include<bits/stdc++.h>
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

// case 1---distance in subtrees

void printsubtreeNodes(Node* root,int k){
    if(root==NULL|| k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return; 
    }
    printsubtreeNodes(root->left,k-1);
    printsubtreeNodes(root->right,k-1);

}


// case 2

int printNodesatk(Node* root,Node* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        printsubtreeNodes(root,k);
        return 0;
    }
    int dl=printNodesatk(root->left,target,k);
    if(dl!=-1){
        if(dl+1==k){
            cout<<root->data<<" ";

        }else{
            printsubtreeNodes(root->right,k-dl-2);
        }
        return 1+dl;
    }
    int dr=printNodesatk(root->right,target,k);
    if(dr!=-1){
        if(dr+1==k){
            cout<<root->data<<" ";

        }else{
            printsubtreeNodes(root->left,k-dr-2);
        }
        return 1+dr;
    }
    return -1;
}








int main(){
    struct Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    
    printNodesatk(root,root->left,1);
    // OP->4 1
    
    //       1
    //     /  \
    //    2    3
    //  / 
    // 4   

    // ...............................output 2
    
    //  struct Node * root = new Node(20);
    // root->left = new Node(8);
    // root->right = new Node(22);
    // root->left->left = new Node(4);
    // root->left->right = new Node(12);
    // root->left->right->left = new Node(10);
    // root->left->right->right = new Node(14);
    // struct Node* target = root->left->right;
    // printNodesatk(root, target, 2);
    // OP->4 20
    return 0;
}