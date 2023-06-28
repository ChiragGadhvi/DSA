/*  Build Tree From Preorder and Inorder 
    Algorithm:
    1)Pick element from Preorder and create a Node
    2)Increment Preorder index
    3)Search for picked element pos in Inorder
    4)Call to build left Subtree from Inorder 0 to pos-1
    5)Call to build right Subtree from pos+1 to n
    6)Return the node
*/


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[],int start,int end , int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[],int inorder[],int start,int end){
    static int idx = 0;
    if(start>end){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);
    if(start == end){
        return node;
    }
    int pos = search(inorder,start,end,curr);
    node->left = buildTree(preorder,inorder,start,pos-1);
    node->right = buildTree(preorder,inorder,pos+1,end);
    
    return node;
}

void InorderPrint(Node* root){
    if(root == NULL){
        return;
    }
    InorderPrint(root->left);
    cout<<root->data<<" ";
    InorderPrint(root->right);
}

int main(){

    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    // Build Tree
    Node* root = buildTree(preorder,inorder,0,4);
    // Inorder Print
    InorderPrint(root);

    return 0;
}