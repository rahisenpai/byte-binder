#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *left, *right;
    //struct node *parent;
};

struct node *allocate_node(int val){
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->val = val;
    temp->left = temp->right = NULL;
    //temp->parent = NULL;
    return temp;
}

struct node* insert (struct node* root, int val){
    if (root == NULL){
        return allocate_node(val);
    }
    if (val < root->val){
        root->left = insert(root->left, val);
        //root->left->parent = root;
    } else {
        root->right = insert(root->right, val);
        //root->right->parent = root;
    }
    return root;
}

int main(){
    struct node *root = NULL;
    root = insert(root,50);
    root = insert(root,30);
    root = insert(root,70);
    printf("%d %d %d",root->left->val,root->val,root->right->val);

    return 0;
}