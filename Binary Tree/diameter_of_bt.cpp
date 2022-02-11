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

int calcheight(Node* root){
    if(root==NULL){
        return 0;
    }
    return max(calcheight(root->left), calcheight(root->right))+1;
}

int calcdia(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcheight(root->left);
    int rheight=calcheight(root->right);

    int currdai=lheight+rheight+1;
     int ldia=calcdia(root->left);
     int rdia=calcdia(root->right);

     return max(currdai,max(ldia,rdia));
    

}



int main(){
    struct Node* root= new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    cout<<calcdia(root);
    return 0;


    //       1
    //     /  \
    //    2    3
}
