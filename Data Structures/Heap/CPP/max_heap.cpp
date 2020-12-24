
//BUILDING MAX HEAP USING UPADJUSTMENT

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h[20];
    int n=0,largest=1;
     int val,i=1,j=1,parent,temp;
        int ans=0;
        do
        {
            cout<<"\nEnter the node:";
            cin>>val;
            
            //UPADJUSTMENT: sorting while adding
            
            h[i]=val;
            j=i; //current node
            parent=j/2;  //parent node of the current node
            while(parent>=1) 
            {
              if(h[parent]<h[j])    //checking whether current node is greater than its parent
                {                   /*if yes then swap current with its parent node
				                    as in max heap parent node is always  greater than child node */  
                   temp=h[parent];
                   h[parent]=h[j];
                   h[j]=temp;
                }
              j=j/2;  //repeat if parent is not root node till you reach root node 
             parent=j/2;  
            }//end while;
            i++;
           cout<<"\nDo you want to add more nodes?(yes-1,no-0)";
           cin>> ans;
        }while(ans==1);   
        n=i-1;
        h[0]=n;

       //Displaying the max heap.
	   
         int k=1;
       cout<<"The heap is as: ";
        for(k=1;k<=n;k++)
        {
           cout<<" "<<h[k];
        }
}

