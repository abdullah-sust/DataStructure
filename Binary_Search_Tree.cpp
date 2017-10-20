#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct node
{
    int key;
    struct node *left, *right;
};

void inOrder_Traverse(struct node* n)
{
    if(n==NULL)
        return;
    inOrder_Traverse(n->left);
    cout<<n->key<<endl;
    inOrder_Traverse(n->right);
    return;
}
void preOrder_Traverse(struct node* n)
{
    if(n==NULL)
    return;
    cout<<n->key<<endl;
    preOrder_Traverse(n->left);
    preOrder_Traverse(n->right);
    return;
}

void postOrder_Traverse(struct node* n)
{
    if(n==NULL)
    return;
    postOrder_Traverse(n->left);
    postOrder_Traverse(n->right);
    cout<<n->key<<endl;
    return;
}

struct node* insert(struct node* n, int key)
{
    if(n==NULL)
    {
        struct node *t =(struct node *) malloc(sizeof(struct node));
        t->key=key;
        t->left=t->right=NULL;
        return t;
    }
    if(key > n->key)
    {
        n->right = insert(n->right,key);
    }
    if(key < n->key)
    {
        n->left  = insert(n->left ,key);
    }
    //printf("%d\n",key);
    return n;
}

/* Given a non-empty binary search tree, return the node with minimum
   key value found in that tree. Note that the entire tree does not
   need to be searched. */
struct node * minValueNode(struct node* node)
{
    struct node* current = node;
    /* loop down to find the leftmost leaf */
    while (current->left != NULL)
        current = current->left;
    return current;
}

/* Given a binary search tree and a key, this function deletes the key
   and returns the new root */
struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL)
        return root;
    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    // If the key to be deleted is greater than the root's key,
    // then it lies in right subtree
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        struct node* temp = minValueNode(root->right);
        // Copy the inorder successor's content to this node
        root->key = temp->key;
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}

int main()
{
    /* Let us create following BST
              50
            /     \
           30      70
          /  \    /  \
        20   40  60   80 */
    struct node *root=NULL;
    root=insert(root,50);
    int arr[]= {30,20,40,70,60,80};
    for(int i=0;i<6;++i)
        insert(root,arr[i]);

    cout<<"Inder traverse:\n";
    inOrder_Traverse(root);
    cout<<"Preorder traverse:\n";
    preOrder_Traverse(root);
    cout<<"Post traverse:\n";
    postOrder_Traverse(root);

    printf("\nDelete 20\n");
    root = deleteNode(root, 20);
    printf("Inorder traversal of the modified tree \n");
    inOrder_Traverse(root);

    printf("\nDelete 30\n");
    root = deleteNode(root, 30);
    printf("Inorder traversal of the modified tree \n");
    inOrder_Traverse(root);

    printf("\nDelete 50\n");
    root = deleteNode(root, 50);
    printf("Inorder traversal of the modified tree \n");
    inOrder_Traverse(root);
    return 0;
}
