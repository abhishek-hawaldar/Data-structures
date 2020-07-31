/*


*/

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
{
    int dat,loc;
  struct Node* head = NULL;
    int x;


/*

    insertbeg(&head,3);

    insertbeg(&head,2);
    insertbeg(&head,1);
    insertend(&head,5);
    insertAfter(&head,4,4);
    printList(head);
    search(head,9);
    search(head,5);
}*/
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
            insertAfter(&head, loc,dat);
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
           break;
    case 9: exit(1);

printf("\n");
    }
    }

  return 0;
}
/*

OUTPUT:

 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:1
enter value:1

 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:2
enter value:2

insert location:2

 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:3
enter value:3

 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:1
enter value:0

 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:7
 0  1  2  3
 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:3
enter value:4

 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:7
 0  1  2  3  4
 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:8
enter element to search3
found at loc:4
 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:5

insert location:3

 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:7
 0  1  3  4
 1:insert at beginning
2:insert at particular location
3:insert at end
4.delete at beg
5. delete at mid
6.delete end
7.display list
8.search
9.exit
select the option:9

Process returned 1 (0x1)   execution time : 53.775 s
Press any key to continue.
*/

