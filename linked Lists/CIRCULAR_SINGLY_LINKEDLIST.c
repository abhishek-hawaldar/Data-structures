#include<stdio.h>
#include<stdlib.h>

// CIRCULAR LINKED LIST
typedef struct cllnode
{
  int data;
  struct cllnode *next;
}cllnode;


int Length(struct cllnode* last)
{
    //printf("calculating length");
    struct cllnode* current = last;
    int count = 0;

    // if list is empty simply return length zero
    if (last == NULL) {
        return 0;
    }

    // traverse forst to last node
    else {
        do {
            current = current->next;
            count++;
        } while (current != last);
    }
    return count;
}


void insertbeg (struct cllnode** last_ref, int new_data)
{
    cllnode* new_node = (cllnode*) malloc(sizeof(cllnode));

    if(*last_ref==NULL)
    {

    new_node->data  = new_data;

    new_node->next = new_node;

    (*last_ref)    = new_node;
    }
    else
        {
            cllnode *first=(*last_ref)->next;

             new_node->data  = new_data;

             new_node->next = first;

             (*last_ref)->next    = new_node;
        }
}

void insertmid(struct cllnode** last_ref, int new_data,int loc)
{
    cllnode* temp = (*last_ref)->next;

     for(int i=2;i<loc && temp!=(*last_ref)->next;i++)
    {
       temp=temp->next;
    }
     if(loc>Length(*last_ref) || loc<0)
    {
        printf("\ninvalid location to enter\n");

    }

    else{

        //printf("valid location to enter\n");
     cllnode* new_node =(struct cllnode*) malloc(sizeof(struct cllnode));

    new_node->data  = new_data;

    new_node->next = temp->next;

    temp->next = new_node;
    }

}

void insertend(struct cllnode** last_ref, int new_data)
{
    struct cllnode* new_node = (struct cllnode*) malloc(sizeof(struct cllnode));


if(*last_ref==NULL)
    {

    new_node->data  = new_data;

    new_node->next = new_node;

    (*last_ref)    = new_node;
    }
    else
    {
        new_node->data  = new_data;

    new_node->next =(*last_ref)->next;
    (*last_ref)->next=new_node;
    *last_ref=new_node;

    }
}

void deletebeg(struct cllnode** last)
{
    if(*last==NULL)
    {
        printf("empty linked list!");
    }
    else
    {
            cllnode* temp= (*last)->next;

            (*last)->next= temp->next;
            free(temp);
    }
    return;
    }

 void deletemid(struct cllnode** last, int loc)
 {
     struct cllnode* temp= (*last)->next;
     for(int i=2;i<loc&& temp!=(*last)->next;i++)
     {
         temp=temp->next;
     }
     if(loc>Length(*last) || loc<0)
    {
        printf("invalid location to delete\n");

    }

     else
        {
        printf("valid location to delete\n");

        struct cllnode* delnode= temp->next;
        temp->next=delnode->next;
        free(delnode);
        }
 }

 void deleteend(struct cllnode ** last)
 {
     struct cllnode *temp= (*last)->next;
    if(*last==NULL)
    {
        printf("empty linked list!");
    }
    else{

     while(temp->next!=(*last))
     {
         temp=temp->next;
     }
     temp->next=(*last)->next;
     free(*last);
     *last=temp;


    }


 }

 void search(struct cllnode *node, int x)
 {
     int i=1;
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
void printList(struct cllnode *node)
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
  cllnode * last = NULL;
    int x;

//check for exit condition of insert mid !

/*
    insertbeg(&last,3);

    insertbeg(&last,1);
    insertmid(&last,2,2);
    insertend(&last,4);
    deletemid(&last,2);
    printf("hii%d\n%d\n%d",last->data,last->next->data,last->next->next->data);

/*
    insertbeg(&last,2);
    insertbeg(&last,1);
    insertend(&last,5);
    insertAfter(&last,4,4);
    printList(last);
    search(last,9);
    search(last,5);
}
*/
while(1)
    {
        printf("CHOOSE AN OPTION:\n1:insert at beginning\n2:insert at particular location\n3:insert at end\n4.delete at beg\n5. delete at mid\n6.delete end\n7.display list\n8.search\n9.exit\nselect the option:");
        scanf("%d",&x);
  switch(x){
   case 1: printf("enter value:");
            scanf("%d",&dat);
            insertbeg(&last, dat);
            break;
   case 2:printf("enter value:");
            scanf("%d",&dat);
            printf("\ninsert location:");
            scanf("%d",&loc);
            insertmid(&last, loc,dat);
            break;
    case 3:printf("enter value:");
            scanf("%d",&dat);
            insertend(&last, dat);
            break;
    case 4: deletebeg(&last);
    break;
    case 5:  printf("\ninsert location:");
             scanf("%d",&loc);
             deletemid(&last,loc);
                break;
    case 6:deleteend(&last);
                break;
    case 7: printList(last);
            break;
    case 8:printf("enter element to search");
           scanf("%d",&dat);
           search(last,dat);
    case 9: exit(1);

printf("\n");
    }
    }

  return 0;
}


