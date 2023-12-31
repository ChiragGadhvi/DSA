/*  Binary Tree Traversal:
            1
           /  \
           2   3
          / \ / \
          4 5 6 7
    Preorder Traversal: 1,2,4,5,3,6,7
        Root 
        Left Subtree
        Right Subtree
    Inorder Traversal: 4,2,5,1,6,3,7
        Left Subtree
        Root 
        Right Subtree
    Postorder Traversal: 4,5,2,6,7,3
        Left Subtree
        Right Subtree
        Root
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

void Preorder(struct Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(struct Node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Postorder(struct Node* root){
    if(root == NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}

int main(){

    /*       1
            / \
           2   3
          / \ / \
          4 5 6  7
    */

   struct Node* root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   root->right->left = new Node(6);
   root->right->right = new Node(7);

// Preorder(root);
// Inorder(root);
   Postorder(root);

    return 0;
}