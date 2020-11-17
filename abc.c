#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    struct node *a;
    struct node *b;
    struct node *c;
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    a->data=10;
    a->next=b;
    b->data=20;
    b->next=c;
    c->data=30;
    c->next=NULL;


        printf("%d -> ",a->data);
        printf("%d -> ",b->data);
        printf("%d",c->data);
        return 0;
}
