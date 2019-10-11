#include<bits/stdc++.h>

using namespace std;

int solve(int v[],int w[],int n,int W)
{
    //dp array to store values
    int dp[n+1][W+1],i,j;

    //initalising array with 0 weight allowed as 0
    for(i=0;i<n+1;i++)
        dp[i][0]=0;

     //initalising array with 0 item available as 0  
    for(i=0;i<W+1;i++)
        dp[0][i]=0;
        
    //iterate to fill dp array    
    for(i=1;i<n+1;i++)
    {
        for(j=1;j<W+1;j++)
        {
            if(j<w[i-1])
                dp[i][j]=dp[i-1][j];

            // change is dp[i][j-w[i-1]] instead of dp[i-1][j-w[i-1]] due to repition
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-w[i-1]]+v[i-1]);
        }
    }
    
    return dp[n][W];
}
int main() {
	int t,i,a,n,W; 

    //input no of test cases
	cin>>t;

	while(t--)
	{
        //n is no of items and W is size of bag to be filled with items
	    cin>>n>>W;

        //v is values of each item and w is weight of items
	    int v[n],w[n];

        //input v and w
	    for(i=0;i<n;i++)
	        cin>>v[i];

	   for(i=0;i<n;i++)
	        cin>>w[i];

        //prints maximum profit
	    cout<<solve(v,w,n,W)<<"\n";
	}
}