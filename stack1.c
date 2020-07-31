
#include <stdio.h>
#define size 20
typedef struct stack{
int top;

int data[size];

}stack;

void initialise(stack *a)
{
    a->top= -1;
}

int isempty(stack *a)
{
    if (a->top==-1) return 1;
    else return 0;
}

int isfull(stack *a)
{
   if (a->top==size-1)return 1;
        else return 0;
}

int push(stack*a, int x)
{
    (a->top)++;
    a->data[a->top]=x;
}
int pop(stack *a)
{
    int x= a->data[a->top];
    (a->top)--;
    return x;
}

void display(stack z)
{
    for(int i=z.top;i>=0;i--)
    {

        printf("   %d",z.data[i] );
    }
}

int main()
{
    stack z;
    initialise(&z);
    printf("\ntop is%d",z.top);
   int x=isempty(&z);
printf("\nis the stack empty?%d",x);
push(&z,14);

push(&z,15);
push(&z,16);

push(&z,17);
push(&z,18);

push(&z,19);


printf("\ntop is%d",z.top);
printf("\ndisplaying stuff");

display(z);

printf("\npopped:%d", pop(&z));
}
/*

top is-1
is the stack empty?1
top is5
displaying stuff   19   18   17   16   15   14
popped:19
Process returned 0 (0x0)   execution time : 14.298 s
Press any key to continue.





*/
