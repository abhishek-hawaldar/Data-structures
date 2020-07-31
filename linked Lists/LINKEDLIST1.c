#include<stdio.h>
#include<stdlib.h>
//DOUBLY LINKED LIST NODE:
typedef struct dllnode
{
    int data;
    struct dllnode *next,*prev;
}dllnode;

void insertbeg(struct dllnode**head,int val)
{
    struct dllnode *temp=(dllnode*)malloc(sizeof(dllnode));

    if(*head==NULL)
    {
        temp->data=val;
        temp->prev=NULL;
        temp->next=NULL;
        *head=temp;

    }
    else
    {
         temp->data=val;
        temp->prev=NULL;
        temp->next=*head;
        (*head)->prev=temp;
        *head=temp;
    }
}


void insertmid(dllnode **head, int val, int loc)
{

dllnode *temp=*head;
for (int i=2;i<loc && temp!=NULL;i++)
{
    temp=temp->next;
}
if(temp==NULL)
{
    printf("enter valid location!\n");
}
else
{

dllnode *newnode=(dllnode*)malloc(sizeof(dllnode));
newnode->data=val;
newnode->next=temp->next;
newnode->prev=temp;
temp->next=newnode;
newnode->next->prev=newnode;
}
}

void insertend(dllnode **head , int val )
{

    struct dllnode *temp=(dllnode*)malloc(sizeof(dllnode));
    dllnode *last=*head;

    if(*head==NULL)
    {
        temp->data=val;
        temp->prev=NULL;
        temp->next=NULL;
        *head=temp;

    }


    else{

    while(last->next!=NULL)
    {
        last=last->next;
    }

    temp->data=val;
    temp->prev=last;
    temp->next=NULL;

    last->next=temp;
    last=temp;

    }
}
void deletebeg(dllnode**head)
{   if(*head==NULL)
    {
        printf("empty linked list!");
    }
    else
    {
        dllnode *temp=*head;
    *head=temp->next;
    (*head)->prev=NULL;
      free(temp);
    }
}
void deletemid(dllnode **head, int loc)
{
    if(*head==NULL)
    {
        printf("empty linked list!");
    }
    else{
        dllnode *temp=*head;
        for (int i=2;i<loc && temp!=NULL;i++)
            {
            temp=temp->next;
            }
        if(temp==NULL)
        {
        printf("enter valid location!\n");
        }
            else
        {
            dllnode *delnode=temp->next;
            temp->next=delnode->next;
            delnode->next->prev=temp;
            free(delnode);
        }
}

}
void deleteend(dllnode **head)
{
if(*head==NULL)
    {
        printf("empty linked list!");
    }
    else
    {
        dllnode *temp=*head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }

        free(temp->next);
        temp->next=NULL;

}

}
void search(dllnode *node, int x)
 {int i=1;
     while(node->data!=x && node->next!=NULL )
     {
         node=node->next;
         i++;
     }
     if(node->data==x)
     {
         printf("found at loc:%d",i);
        }
    else{
                printf("not found");
        }
 }




void printList(dllnode *node)
{
    while(node!=NULL)
    {
    printf(" %d",node->data);
    node=node->next;
    }
}


int main()
{
    dllnode *head=NULL;
    int dat,loc;
    int x;



/*
    insertbeg(&head,3);

    insertbeg(&head,2);
    insertbeg(&head,1);
    insertend(&head,5);
    insertmid(&head,4,4);
    deletemid(&head,3);
    printList(head);
}
*/
while(1)
    {
        printf("\n 1:insert at beginning\n2:insert at particular location\n3:insert at end\n4.delete at beg\n5. delete at mid\n6.delete end\n7.display list\n8.search\n9.exit\nselect the option:");
        scanf("%d",&x);
  switch(x){
   case 1: printf("enter value:");
            scanf("%d",&dat);
            insertbeg(&head, dat);
            break;
   case 2:printf("enter value:");
            scanf("%d",&dat);
            printf("\ninsert location:");
            scanf("%d",&loc);
            insertmid(&head,dat,loc);
            break;
    case 3:printf("enter value:");
            scanf("%d",&dat);
            insertend(&head, dat);
            break;
    case 4: deletebeg(&head);
    break;
    case 5:  printf("\ninsert location:");
             scanf("%d",&loc);
             deletemid(&head,loc);
                break;
    case 6:deleteend(&head);
                break;
    case 7: printList(head);
            break;
    case 8:printf("enter element to search");
           scanf("%d",&dat);
           search(head,dat);
    case 9: exit(1);
    default: printf("select correct option");
                break;
printf("\n");
    }
}

  return 0;
}


