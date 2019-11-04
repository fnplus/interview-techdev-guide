///Lets do Kadane's Algorithm
///It is used to find largest sum in continous sub-array, for an array
///The following program also gives index of the array obtained ( for 0 based index)
///Explaination:https://hackernoon.com/kadanes-algorithm-explained-50316f4fd8a6

#include<iostream>
using namespace std;

int main()
{
    int sumcurrent=0 , maxsum = 0,k=0,j=0 ,x = -1;
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        int temp = a[i];
        ///cout<<" sumcurrent+ a[i] is "<<sumcurrent+a[i]<<endl;
        if((sumcurrent+a[i])>=0)
        {
            sumcurrent = sumcurrent +a[i];
        }
        else
        {
            sumcurrent = 0;
            x = i+1;
        }
        if(sumcurrent>maxsum)   ///Will only enter when when largest sum obtained
        {
            maxsum = sumcurrent ;
            j = i;
            if(x>=0)
            {
                k=x;
            }
        }

    }

    cout<<" maxsum is "<<endl;
    cout<<maxsum<<endl;

    cout<<" first and last index are "<<k<<" and "<<j<<endl;

    return 0;
}
