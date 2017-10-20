#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    Node *next;
};

struct Node *root, *head, *tail;



void insert( int d)
{
    struct Node* t = (struct Node*)malloc(sizeof(struct Node));
    t->data=d;
    t->next=NULL;

    if(root==NULL)
    {
        root=t;
        tail=t;
        return;
    }
    head = root;
    while(head->next!=NULL)
    {
        head=head->next;
    }
    head->next=t;
    tail=t;
    return;
}

void remove(int d)
{
    if(root==NULL)
    {
        printf("Empty!\n\n");
        return;
    }
    if(root->data==d)
    {
        root=root->next;
        return;
    }
    if(tail->data==d)
    {
        head=root;
        while(head->next!=tail)
        {
            head=head->next;
        }
        head->next=NULL;
        tail=head;
        return;
    }

    struct Node *pre = root;
    head=root->next;

    while(head->data!=d)
    {
        pre=pre->next;
        head=head->next;
    }
    pre->next=head->next;
    return;
}

void traverse_Order()
{
    head=root;
    while(head!=NULL)
    {
        printf(" %d",head->data);
        head=head->next;
    }
    printf("\n\n");
    return;
}

void traverse_Reverse_Order(struct Node* n)
{
    return;
}

int main()
{
    int arr[]={100,99,0,1,2,3,4,5,55,56,6,7,8,9,10,-100,-101};
    root=NULL;
    for(int i=0;i<17;++i)
    {
        insert(arr[i]);
    }

    /*Traversing link list Order*/
    traverse_Order();

    remove(0);
    printf("After removing 0:  ");
    /*Traversing link list Order*/
    traverse_Order();

    remove(100);
    printf("After removing 100:  ");
    /*Traversing link list Order*/
    traverse_Order();

    remove(99);
    printf("After removing 99:  ");
    /*Traversing link list Order*/
    traverse_Order();

    remove(55);
    printf("After removing 55:  ");
    /*Traversing link list Order*/
    traverse_Order();

    remove(56);
    printf("After removing 56:  ");
    /*Traversing link list Order*/
    traverse_Order();

    remove(-100);
    printf("After removing -100:  ");
    /*Traversing link list Order*/
    traverse_Order();

    remove(-101);
    printf("After removing -101:  ");
    /*Traversing link list Order*/
    traverse_Order();

    insert(5000);
    printf("After inserting 5000:  ");
    traverse_Order();
    remove(5000);
    printf("After removing 5000:  ");
    /*Traversing link list Order*/
    traverse_Order();

    return 0;
}
