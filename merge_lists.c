#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int val;
    struct node *next;
}Node;

void insert(Node **root, int val){
    if(*root== NULL)
    {
        printf("Inserting Head Node\n");
        (*root)=(Node*)malloc(sizeof(Node));
        (*root)->val = val;
        (*root)->next = NULL;
    }else{
        while((*root)->next !=NULL)
            (*root) = (*root)->next;
        printf("Inserting Elements\n");
        (*root)->next = (Node*)malloc(sizeof(Node));
        (*root)->next->val = val;
        (*root)->next->next = NULL;
    }
}

void print(Node *root){

    if(root == NULL)
        printf("Empty list");

    while(root != NULL){
        if(root->next == NULL){
            printf("%d",root->val);
            break;

        }
        printf("%d ->", root->val);
        root = root->next;
    }
}
int main()
{
    Node *l1 = NULL, *l2 = NULL;
    printf("Test function for testing Linked list\n");
    insert(&l1, 1);
    insert(&l1, 2);
    insert(&l1, 3);
    insert(&l1, 4);
    print(l1);
    return 0;

}

