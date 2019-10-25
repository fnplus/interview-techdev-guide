#include<stdio.h>
#define INF 9999
struct Adjacency
{
    int v;
    int e;
    int *adj;
};
main()
{
    int i,j;
    struct Adjacency *g=(struct Adjacency*)malloc(sizeof(struct Adjacency));

    //the below given matrix represents the distances between the corresponding row(representing the node) and corresponding column(represent the node)
    int matrix[5][5]={
            {0,5,INF,1,INF},
            {INF,0,3,INF,INF},
            {INF,INF,0,4,1},
            {INF,1,INF,0,INF},
            {INF,INF,1,2,0}
            };

    g->v=5;
    g->e=5;
    g->adj=(int*)malloc(g->v*g->v*sizeof(int));
    for(i=0;i<=g->v-1;i++){
        for(j=0;j<=g->v-1;j++)
    {
        *(g->adj+i*g->v+j)=matrix[i][j];

    }
    }
    printsolution(g);
    floydwarshall(g);
    printf("the shortest path output of the graph nodes are\n");
    printsolution(g);
}
//this function below will give the result after computation
void printsolution(struct Adjacency *g)
{
    int i,j;
    for(i=0;i<=g->v-1;i++)
    {
        for(j=0;j<=g->v-1;j++)
        {
            if(*(g->adj+i*g->v+j)==INF)
                printf("%7s","INF");
            else
                printf("%7d",*(g->adj+i*g->v+j));
        }
        printf("\n");
    }
}
void floydwarshall(struct Adjacency *g)
{
    int i,j,k;
    int dist[4][4];
    
    for(i=0;i<=g->v-1;i++)
    {
        for(j=0;j<=g->v-1;j++)
        {
            dist[i][j]=*(g->adj+i*g->v+j);
        }
    }
    for(k=0;k<=g->v-1;k++)
    {
        for(i=0;i<=g->v-1;i++)
        {
            for(j=0;j<=g->v-1;j++)
            {
                //this step is called relaxation
                if(dist[i][k]+dist[k][j]<dist[i][j])
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    for(i=0;i<=g->v-1;i++)
    {
        for(j=0;j<=g->v-1;j++)
        {
            *(g->adj+i*g->v+j)=dist[i][j];
        }
    }
}
