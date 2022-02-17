// Single Linked List //
// Mahadev G I//

#include<stdio.h>  
#include<stdlib.h>  
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *start;  
               
void insert_begin();   
void insert_last();  
void insert_locc();  
void delete_begin();  
void delete_last();  
  
void print();  
void main ()  
{  
    int ch=0;  
    while(ch!=8)   
    {    
        printf("\nEnter the operation to be performed\n");    
        printf("\n1.Insert in the begining\n2.Insert at last\n3.Insert at ordered lis\n4.Delete from Beginning\n5.Delete from last\n7.Show\n8.Exit\n");           
        scanf("\n%d",&ch);  
        switch(ch)  
        {        
            case 1:  
            insert_begin();       
            break;  
            case 2:  
            insert_last();         
            break;  
            case 3:  
            insert_locc();       
            break;  
            case 4:  
            delete_begin();       
            break;  
            case 5:  
            delete_last();        
            break;   
            case 7:  
            print();        
            break;  
            case 8:  
            exit(0);  
            break;  
            default:  
            printf("Enter valid option");  
        }  
    }  
}

// Insertion at beginning //           

void insert_begin()                  
{  
    struct node *p;  
    int value;  
    p=(struct node *)malloc(sizeof(struct node *));  
    if(p==NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&value);    
        p->data=value;  
        p->next=start;  
        start=p;  
    }  
}  

//Insertion at last //

void insert_last()
{
  
    struct node *p,*temp;  
    int value;     
    p=(struct node*)malloc(sizeof(struct node));      
    if(p==NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
        printf("\nEnter value\n");  
        scanf("%d",&value);  
        p->data=value;  
        if(start==NULL)  
        {  
            p->next=NULL;  
            start=p;  
        }  
        else  
        {  
            temp=start;  
            while(temp->next!=NULL)  
            {  
                temp=temp->next;  
            }  
            temp->next=p;  
            p->next=NULL;  
        }  
    }  
}  

//Insert at ordered list//

void insert_locc()
{  
    int i,loc,value;   
    struct node *p, *temp;  
    p=(struct node *)malloc(sizeof(struct node));  
    if(p==NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
        printf("\nEnter element value");  
        scanf("%d",&value);  
        p->data=value;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&loc);  
        temp=start;  
        for(i=0;i<loc;i++)  
        {  
            temp=temp->next;  
            if(temp==NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }  
        }  
        p->next=temp->next;   
        temp->next=p; 
    }  
}  

//Delete the node at beginning //

void delete_begin()
{  
    struct node *p;  
    if(start==NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        p=start;  
        start=p->next;  
        free(p);  
    }  
}  

//Delete the node at last//

void delete_last() 
{  
    struct node *p,*p1;  
    if(start==NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(start->next==NULL)  
    {  
        start=NULL;  
        free(start);  
        printf("\nOnly node of the list deleted ...\n");  
    }  
    else  
    {  
        p=start;   
        while(p->next!=NULL)  
        {  
            p1=p;  
            p=p->next;  
        }  
        p1->next=NULL;  
        free(p);  
    }     
}  



//To print the output values//

void print()
{  
    struct node *p;  
    p=start;   
    if(p==NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values\n");   
        while (p!=NULL)  
        {  
            printf("\n%d",p->data);  
            p=p->next;  
        }  
    }  
}     