// https://leetcode.com/problems/unique-binary-search-t rees/
#include<iostream>
#include<vector>
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

vector<Node*> constructtrees(int start, int end){
    vector<Node*> trees;
    if(start>end){  
        trees.push_back(NULL);
        return trees;
    }
    for(int i=start;i<=end;i++){
        vector<Node*> tree;
        vector<Node*> leftsubtree=constructtrees(start,i-1);
        vector<Node*> rightsubtree=constructtrees(i+1 ,end);

        for(int j=0;j<leftsubtree.size();j++){
            Node* left=leftsubtree[j];
            for(int k=0;k<rightsubtree.size();k++){
                 Node* right=rightsubtree[k];
                 Node* node=new Node(i);
                 node->left=left;
                 node->right=right;
                 trees.push_back(node);
            }
        }

    }
    return trees;
} 
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<Node*> totaltree=constructtrees(1,3);
    for(int i=0;i<totaltree.size();i++){
        cout<<i+1<<": ";
        preorder(totaltree[i]);
        cout<<endl;
    }

    return 0;
}