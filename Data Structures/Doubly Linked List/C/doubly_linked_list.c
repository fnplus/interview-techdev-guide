
#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};
struct node *start=NULL;
main()
{
    int choice;
    struct node *q;
    while(1)
    {
    q=(struct node*)malloc(sizeof(struct node));
    q->link=NULL;
     printf("\n1.insertatend\n2.insertatbeg\n3.delfront\n4.delrear\n5.display\n6.free\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:insertatend(q);
                printf("\n INSERTION SUCCESSFUL\n");
                break;
        case 2:insertatbeg(q);
                printf("\n INSERTION SUCCESSFUL\n");
                break;
        case 3:delfront();
                break;
        case 4:delrear();
                break;
        case 5:display();
                break;
        case 6:freed();
                break;
        default:printf("\n invalid choice\n");
    }
    }
}
void insertatend(struct node *q)
{
     struct node *r;
    printf("\nenter the data which you want to store\n");
      scanf("%d",&q->data);
    if(start==NULL)
    {
        start=q;
    }
    else
    {
        r=start;
        while(r->link!=NULL)
            r=r->link;
        r->link=q;
    }

}
void insertatbeg(struct node *q)
{
     printf("\nenter the data which you want to store\n");
      scanf("%d",&q->data);
    if(start==NULL)
        start=q;
    else
    {
        q->link=start;
        start=q;
    }

}
void delfront()
{
     struct node *r;
    if(start==NULL)
        printf("\nthe list is empty\n");
   else
   {
    r=start;
    start=start->link;
    printf("the deleted element is %d",r->data);
    free(r);
   }
}
void delrear()
{
    struct node *r,*s;
    int count=0,i;
    r=start;
    if(start==NULL)
        printf("\nthe list is empty\n");
    else
    {
    while(r->link!=NULL)
    {
        r=r->link;
        count++;
    }
    printf("the deleted element is %d",r->data);
    free(r);
    s=start;
    for(i=1;i<=count-1;i++)
    {
        s=s->link;
    }
    s->link=NULL;
    }
}
void display()
{
    struct node *r;
    if(start==NULL)
         printf("\nthe list is empty\n");
    else
    {
        r=start;
        while(r!=NULL)
        {
            printf("\t%d\t",r->data);
            r=r->link;
        }
    }
}
freed()
{
    free(start);
}
