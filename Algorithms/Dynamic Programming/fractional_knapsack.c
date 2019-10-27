#include<stdio.h>
struct Knap
{
    int objname;
    int profit;
    int weight;
    float ratio;
    float x;
}ker[10],temp;
main()
{
    int i,capacity,j;
    printf("enter 7 items details which include the serial no,profit,weight");
    for(i=0;i<=6;i++)
    {
        printf("\nenter item no:\n");
        scanf("%d",&ker[i].objname);
        printf("\nenter weight\n");
        scanf("%d",&ker[i].weight);
        printf("\nenter profit\n");
        scanf("%d",&ker[i].profit);
        ker[i].ratio=(float)ker[i].profit/ker[i].weight;
        fflush(stdin);
    }
    for(i=1;i<=6;i++)
    {
        temp=ker[i];
        for(j=i-1;j>=0 && ker[j].ratio<temp.ratio;j--)
        {
            ker[j+1]=ker[j];
        }
        ker[j+1]=temp;
    }
    printf("\nenter the capacity of the bag\n");
    scanf("%d",&capacity);
    knapsnack(capacity);
}
void knapsnack(int cap)
{
    int i;
    float sum=0.0;
    int tempcap=cap;
    for(i=0;i<=6;i++)
    {
        printf("\nthe list is\n");

        printf("%d %d %d %f\n",ker[i].objname,ker[i].profit,ker[i].weight,ker[i].ratio);
        if(tempcap>0){
            if(tempcap<ker[i].weight)
            {
                ker[i].x=(float)tempcap/ker[i].weight;
                tempcap=0;
            }
            else if(tempcap>ker[i].weight)
            {
                ker[i].x=1.00;
                tempcap-=ker[i].weight;
            }
        }
            printf("%f ",ker[i].x);

            sum=sum+ker[i].profit*ker[i].x;

    }
    printf("\nprofit is %f",sum);
}

