#include <stdio.h>
#include <stdlib.h>
struct node
{
    int co,po;
    struct node *addr;
};
typedef struct node *NODE;
NODE insertend (NODE start,int co,int po)
{
    NODE=temp,cur;
    temp=(NODE)malloc(sizeof(struct node));
    temp->co=co;
    temp->po=po;
    temp->addr=NULL;
    if(start==NULL)
        return temp;
    cur=start;
    while(cur->addr!=NULL)
        cur=cur->addr;
    cur->addr=temp;
    return start;

}
void display(NODE start)
{
    NODE temp;
    if(start==NULL)
        printf("\n Polynomial empty");
    else
    {
        temp=start;
        while(temp->addr!=NULL)
        {
            printf("%d*x^%d+",temp->co,temp->po);
            temp=temp->addr;
        }
    }
}
