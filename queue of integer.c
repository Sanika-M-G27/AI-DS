#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct queue
{
    int r;
    int f;
    int data[SIZE];
};
typedef struct queue QUEUE;
void enqueue(QUEUE *q,int item)
{
    if(q->r==SIZE-1)
        printf("\n QUEUE is full\n");
    else{
        q->r=q->r+1;
        q->data[q->r]=item;
        if(q->r==-1)
            q->f=0;
    }
}
void Dequeue(QUEUE *q)
{
    if(q->f==-1)
        printf("\n Queue is empty");
    else{
        printf("\n element deleted is %d",q->data[q->f]);
        if(q->f==q->r)
        {
            q->f=-1;
            q->r=-1;
        }
        else
            q->f=q->f+1;
    }
}
void display(QUEUE q)
{
    int i,j;
    if(q.f==-1)
        printf("\n Queue is empty");
    else{
        printf("\n Queue contents are :\n");
        for(i=q.f;i<=q.r;i++)
            printf("%d \t",q.data[i]);
    }
}
int main(){
int ch,item;
QUEUE q;
q.f=-1;
q.r=-1;
for(;;)
    {
        printf("\n Queue operation\n 1.enqueue\n 2.Dequeue\n 3.display\n 4.exit\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("n enter element :");
                   scanf("%d",&item);
                   enqueue(&q,item);
                   break;
            case 2:Dequeue(&q);
                   break;
            case 3:display(q);
                   break;
            default:exit(0);
        }
    }
    return 0;
}
