#include<iostream>
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
// ......................complexityO(N) 
bool checkbst(Node* root,Node* min=NULL,Node* max=NULL){

    if(root==NULL){
        return true;
    }

    if(min!=NULL &&root->data<=min->data){
        return false;
    }   
    if(max!=NULL &&root->data>=max->data){
        return false;
    } 
    bool leftvalid=checkbst(root->left,min,root);
    bool rightvalid=checkbst(root->right,root,max);
    return leftvalid&&rightvalid;

}



int main(){

    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);

    Node* root2=new Node(5);
    root2->left=new Node(2);
    root2->right=new Node(8);
    if(checkbst(root,NULL,NULL)){
        cout<<"valid BST"<<endl;
    }
    else {
    cout<<"invalid BST";

    }


    return 0;
}