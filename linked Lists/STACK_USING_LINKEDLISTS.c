//stack using linked list

#include<stdio.h>
#include<stdlib.h>


struct Node
{
  int data;
  struct Node *next;
};
void insertbeg (struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->data  = new_data;

    new_node->next = (*head_ref);

    (*head_ref)    = new_node;
}

void insertAfter(struct Node** head_ref,int loc, int new_data)
{
    struct Node* temp = *head_ref;
     for(int i=2;i<loc && temp!=NULL;i++)
    {
       temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("invalid location");
    }
    else{
    struct Node* new_node =(struct Node*) malloc(sizeof(struct Node));

    new_node->data  = new_data;

    new_node->next = temp->next;

    temp->next = new_node;
    }

}

void insertend(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = *head_ref;

    new_node->data  = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }

    while (last->next != NULL)
        {last = last->next;}

    last->next = new_node;
    return;
}

void deletebeg(struct node** head)
{
    if(*head==NULL)
    {
        printf("empty linked list!");
    }
    else
    {
            struct Node* temp= *head;
            *head= temp->next;
            printf("%d",temp->data);
            free(temp);
    }
    return;
    }
 void deletemid(struct Node** head, int loc)
 {
     struct Node* temp= *head;
     for(int i=2;i<loc;i++)
     {
         temp=temp->next;
     }
     if(temp==NULL)
     {
         printf("invalid location");
         }
     else
        {

        struct Node* delnode= temp->next;
        temp->next=delnode->next;
        free(delnode);
        }
 }

 void deleteend(struct Node ** head)
 {
     struct Node *last= *head;

     while(last->next->next!=NULL)
     {
         last=last->next;
     }

     //struct Node *temp=last->next;
     //free(temp);
     free(last->next);
     last->next=NULL;



 }

 void search(struct Node *node, int x)
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
void printList(struct Node *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->data);
     node = node->next;
  }
}


int main()
{   printf("STACK OPERATIONS USING LINKED LISTS:\n");
    int dat,loc;
  struct Node* head = NULL;
    int x;

while(1)
    {
        printf("\n 1:PUSH\n2.POP\n3.display STACK\n4.exit\nselect the option:");
        scanf("%d",&x);
  switch(x){
   case 1: printf("enter value:");
            scanf("%d",&dat);
            insertbeg(&head, dat);
            break;
   case 2: deletebeg(&head);
    break;

    case 3: printList(head);
            break;

    case 4: exit(1);

printf("\n");
    }
    }

  return 0;
}


