
#include<stdlib.h>
#include<stdio.h>
#define MAX 5
typedef struct queue
{
    int arr[MAX];
    int front;
    int rear;
}queue;

void init(queue *x)
{
    x->front=-1;
    x->rear=-1;
    //_----------------------------------------------------------------_-


}

int isempty(queue *x)
{
       return(x->front==-1);
}

int isfull(queue *x)
{


 return( (x->rear+1)%MAX ==x->front);

   }

void rear_enqueue(queue *x ,int y )
{
if(!(isfull(x)))
{
 printf("puttin it !\n");
 if (isempty(x))
 {
     x->rear=0;
     x->front=0;
     x->arr[x->rear]=y;
    // printf("empty bruh enque da shizz");
 }
 else
    {//printf("\nenqueing mah niggazzz\n");
       (x->rear)=(x->rear+1)%MAX;
        x->arr[x->rear]=y;


    }
}
else printf("full\n");
}
void front_enqueue(queue *x, int y)
{
    if(!isfull(x))
    {
        if(isempty(x))
        {
            x->front= 0;
            x->rear=0;

            x->arr[x->front]=y;


        }
        else
        { x->front=(x->front-1)%MAX;
            x->arr[(x->front)]=y;

        }
    }
}
void rear_dequeue(queue *x)
{
int temp;
    if(!isempty(x))
    {
    if (x->front==x->rear)
    {
  //  printf("in");
   temp=x->arr[x->front];
    x->front=x->rear=-1;
    }
    else{

        temp=x->arr[x->rear];
        x->rear=(x->rear-1)%MAX;
        }
     printf("\ndequeued:%d",temp);

}
else printf("empty !\n");

}

void front_dequeue(queue *x)
{    int temp;
//printf("front is :%d   is empty returs%d",x->front,isempty(&x));
    if (!(isempty(x)))
{
     if (x->front==x->rear)
{
  //  printf("in");
   temp=x->arr[x->front];
    x->front=x->rear=-1;
    //printf("front:%drear:%d",x->front,x->rear);

}
    else{
      //      printf("bhailoiggg");
    temp=x->arr[x->front];
        //printf("front:%drear:%d",x->front,x->rear);
    x->front=(x->front+1)%MAX;

      // printf("bruh%d",temp);

     //printf("broooo%d",temp);
    }
     printf("\ndequeued:%d",temp);

}
else printf("empty !\n");

}
void display(queue *x)
{
    int i=x->front;
    while(i!=x->rear)
    {
        printf(" %d",x->arr[i]);
        i=(i+1)%MAX;

    }
    printf(" %d",x->arr[i]);
}

void  main()
{
    int n;
    printf("QUEUE!\n");
    int op=0;
    queue x;
    int cond=1;
    init(&x);
    while(cond)
    {printf("\n1.enqueue at rear \n2.enqueue at front \n3.dequeue at front\n4.dequeue at rear \n5.show\n6.exit\n enter you choice:");
    scanf("%d",&op);

    switch(op)
    {
    case 1: printf("enter number to enqueue:");
            scanf("%d",&n);
            rear_enqueue(&x,n);
            break;

    case 2: printf("enter number to enqueue:");
            scanf("%d",&n);
            front_enqueue(&x,n);
            break;
     case 3: front_dequeue(&x);
                break;
     case 4: rear_dequeue(&x);
                break;


     case 6: cond=0;
                break;
   }

   }


}

