#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200]={0},s=0,j;
    cin>>n;
    a[0]=1;
    for(int i=1;i<=n;i++)
    { 
        j=0;
        int carry=0;
      while(carry>0||a[j]>0||j<=s)
      {
          
          a[j] = a[j]*i;
          a[j]+=carry;
          carry=a[j]/10;
          a[j]=a[j]%10;
          j++;
      }
      a[j]+=carry;
      if(a[j]==0)
      j--;
      if(j>s)
      s=j;      
    }
    for(int i=j;i>=0;i--)
    cout<<a[i];
    return 0;
}
