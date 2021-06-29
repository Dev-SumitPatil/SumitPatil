#include<stdio.h>
#include<malloc.h>
struct Node
{
    int data;
    struct Node *lchild;
    struct Node *rchild;
};
void inorderTraversal(struct Node *root)
{
    if(root==NULL) return;
    inorderTraversal(root->lchild);
    printf("%d->",root->data);
    inorderTraversal(root->rchild);
}
void preorderTraversal(struct Node *root)
{
    if(root==NULL) return;
    printf("%d->",root->data);
    preorderTraversal(root->lchild);
    preorderTraversal(root->rchild);
}
void postorderTraversal(struct Node *root)
{
    if(root==NULL) return;
    postorderTraversal(root->lchild);
    postorderTraversal(root->rchild);
    printf("%d->",root->data);

}
struct Node *createNode(value)
{
    struct Node * t=(struct Node *)malloc(sizeof(struct Node));
    t->data=value;
    t->lchild=NULL;
    t->rchild=NULL;
    return t;
};
struct Node *insertLeft(struct Node *root,int value)
{
    root->lchild=createNode(value);
    return root->lchild;
};
struct Node *insertRight(struct Node *root,int value)
{
    root->rchild=createNode(value);
    return root->rchild;
};
int main()
{
    struct Node * root=createNode(1);
    insertLeft(root,2);
    insertRight(root,3);
    insertLeft(root->lchild,4);
    printf("inorder\n");
    inorderTraversal(root);
    printf("preorder\n");
    preorderTraversal(root);
    printf("postorder\n");
    postorderTraversal(root);
    return 0;
}
