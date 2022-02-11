// Time Complexity of hashing based solution can be considered as O(n) under the assumption that we have good hashing function that allows insertion and retrieval operations in O(1) time. In the above C++ implementation, map of STL is used. map in STL is typically implemented using a Self-Balancing Binary Search Tree where all operations take O(Logn) time. Therefore time complexity of the above implementation is O(nLogn).
#include<iostream>
#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

struct Node{
    int key;
    struct Node* left;
    struct Node* right;

    Node(int val){
        key=val;
        left=NULL;
        right=NULL;
    }
};

void getVerticalOrder(Node* root,int hdis,map<int,vector<int> > &m){
    if(root==NULL){
        return;
    }
    m[hdis].push_back(root->key);
    getVerticalOrder(root->left,hdis-1,m);
    getVerticalOrder(root->right,hdis+1,m);

   
}

int main(){
    struct Node* root=new Node(10);
    root->left=new Node(7);
    root->right=new Node(4);
    root->left->left=new Node(3);
    root->left->right=new Node(11);
    root->right->left=new Node(14);
    root->right->right=new Node(6);

    map<int,vector<int> > m;
    int hdis=0;
    
    getVerticalOrder(root,hdis,m);

    for(auto &i:m){
        for(int k=0;k<(i.second).size();k++){
            cout<<i.second[k]<<"  ";
        }
        // cout<<i.first;  .........this gives hdis =horizontal distance
        cout<<endl;
    }

    
    return 0;
}