
/**
 * Write a description of class bubble here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
public class SortBubble
{ public static void main() 
    {  int i,j,temp;  
        int a[] = {4,6,3,2,1,8};//Can be taken as an input
        int n=a.length;    
        for(i=0;i<n-1;i++)     
        {        for(j=0;j<n-i-1;j++) //where i is a pass         
            {            if(a[j]>a[j+1])           
                {
                    int t2=a[j];
                    int t3=a[j+1];
                    temp = a[j];               
                    a[j]=a[j+1];               
                    a[j+1]=temp;            
                }                
            }    
        }   
        System.out.println("The given array in ascending order is as follows : "); 
        System.out.println(a);  
        for(i=0;i<a.length;i++)//loop for printing array

        {     System.out.print(a[i] + " ");       }
    }
} 
