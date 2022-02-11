// ..........
// A tree whose subtrees differ in height by no more than one and the subtrees
// ..............
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
            // ............................. complexity =O(NxN)
// int height(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return max(height(root->right),height(root->left))+1;
// }



// bool baltree(Node* root){
//     if(root==NULL){
//         return true;
//     }
//     if(baltree(root->left)==false){
//         return false;
//     }
//     if(baltree(root->right)==false){
//         return false;
//     }
//     int lh=height(root->left);
//     int rh=height(root->right);
//     if(abs(lh-rh)<=1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }

// .......................O(N)................................
bool baltree(Node* root,int* height){
    if(root==NULL){
        return true;
    }
    int lh=0,rh=0;
    if(baltree(root->left,&lh)==false){
        return false;
    }
    if(baltree(root->right,&rh)==false){
        return false;
    }
    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    //........................... making a balanced tree
    struct Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    // .............................making an unbalanced tree    
    struct Node* root2=new Node(1);
    root2->left=new Node(2);
    root2->left->left=new Node(3);
    //.....................................
    int height=0;
    if(baltree(root2,&height)){
        cout<<"balanced tree";
    }
    else{
        cout<<"unbalanced tree";
    }
    // .........
    cout<<endl;
    // .........
    if(baltree(root,&height)){
        cout<<"balanced tree";
    }
    else{
        cout<<"unbalanced tree";
    }

    return 0;
}