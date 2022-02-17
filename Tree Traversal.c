// TREE TRAVERSAL //
// Mahadev G I//



#include<stdio.h>
#include<stdlib.h>

struct node
{
     char data;
     struct node *lp;
     struct node *rp;
};

void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);

void main()
{
    struct node *a,*b,*c,*d,*e,*f,*g,*t;
    a=(struct node *)malloc(sizeof(struct node));
    b=(struct node *)malloc(sizeof(struct node));
    c=(struct node *)malloc(sizeof(struct node));
    d=(struct node *)malloc(sizeof(struct node));
    e=(struct node *)malloc(sizeof(struct node));
    f=(struct node *)malloc(sizeof(struct node));
    g=(struct node *)malloc(sizeof(struct node));
                       
    t=a;
                       
    a->data='A';
    a->lp=b;
    a->rp=d;
                       
    b->data='B';
    b->lp=c;
    b->rp=NULL;

    c->data='C';
    c->lp=NULL;
    c->rp=NULL;
                       
    d->data='D';
    d->lp=e;
    d->rp=g;


    e->data='E';
    e->lp=NULL;
    e->rp=f;

    f->data='F';
    f->lp=NULL;
    f->rp=NULL;


    g->data='G';
    g->lp=NULL;
    g->rp=NULL;
       
    printf("preorder is \n");
    preorder(t);
    printf("\ninorder is \n");
    inorder(t);
    printf("\npostorder is \n");
    postorder(t);
                       
                       
}                      

void preorder(struct node*t)
{
    if(t==NULL)
    {
        printf("Empty");
    }
    else
    {
        printf("%c ",t->data);
        if(t->lp!=NULL)
        {
            preorder(t->lp);
        }
        if(t->rp!=NULL)
        {
            preorder(t->rp);
        }
    }
}

void inorder(struct node *t)
{
    if(t==NULL)
    {
        printf("Empty");
    }
    else
    {
        if(t->lp!=NULL)
        {
            inorder(t->lp);
        }
        printf("%c ",t->data);
        if(t->rp!=NULL)
        {
            inorder(t->rp);
        }
    }
}

void postorder(struct node *t)
{
    if(t==NULL)
    {
        printf("Empty");
    }
    else
    {
        if(t->lp!=NULL)
        {
            postorder(t->lp);
        }
        if(t->rp!=NULL)
        {
            postorder(t->rp);
        }
        printf("%c ",t->data);
    }

}