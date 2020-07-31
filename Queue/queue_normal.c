
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

void enqueue(queue *x ,int y )
{
    printf("insful return:%d",isfull(x));
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
else printf("bharlay bhava\n");
}

void dequeue(queue *x)
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
        printf("will break next loop if it is :%d\nelement number%d:  %d",x->rear,i,x->arr[i]);
        i=(i+1)%MAX;

    }
    printf("hello%d",x->arr[i]);
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
    {printf("\n1.enqueue \n2.dequeue\n3.show\n4.exit\n enter you choice:");
    scanf("%d",&op);

    switch(op)
    {
    case 1: printf("enter number to enqueue:");
            scanf("%d",&n);
            enqueue(&x,n);
            break;
     case 2: dequeue(&x);
                break;
    case 3 :
            display(&x);
            break;
     case 4: cond=0;
                break;
   }

   }


}

