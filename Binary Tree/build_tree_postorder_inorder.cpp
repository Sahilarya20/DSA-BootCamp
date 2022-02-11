#include "bits/stdc++.h"
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// .......................SEARCH ALGORITHIM...........................
int search(int inorder[],int start,int end,int val){
    for(int i=start;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}

struct node* buildtree(int postorder[], int inorder[], int start, int end)
{
    static int idx = 4;
    if (start > end)
    {
        return NULL;
    }

    int val = postorder[idx];
    idx--;

    struct node* curr = new node(val);
    if (start == end)
    {
        return curr;
    }

    int pos = search(inorder, start, end, val);
    curr->right = buildtree(postorder, inorder, pos+1, end);
    curr->left = buildtree(postorder, inorder, start, pos- 1);

    return curr;
}

// .................................INORDER PRINT TO CHECK OUR CREATED TREE............
void inorderprint(struct node* root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

int main()
{

    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    struct node* root=buildtree(postorder,inorder,0,4);
    inorderprint(root);
    return 0;
}
