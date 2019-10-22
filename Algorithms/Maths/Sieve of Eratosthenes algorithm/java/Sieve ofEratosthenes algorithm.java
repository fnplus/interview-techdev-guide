import java.util.*;
class SieveOfEratosthenes 
{ 
    void sieveOfEratosthenes(int n) 
    { 
    
        boolean prime[] = new boolean[n+1]; 
        for(int i=0;i<n;i++) 
            prime[i] = true; 
          
        for(int p = 2; p*p <=n;) 
        { 
            if(prime[p] == true) 
            {  
                for(int i = p*p; i <= n; i += 2*p) //p*p+k*p is even when k is odd
                    prime[i] = false; 
            }
            //All evens will be changed to false in the first iteration itself.
            //No need to check again.
            if(p==2)
                p++;
            else
                p+=2;
        } 
        if(n>2)
            System.out.print("2 ");
        //Since only odd numbers can be prime.
        for(int i = 3; i <= n; i+=2) 
        { 
            if(prime[i] == true) 
                System.out.print(i + " "); 
        } 
    } 
      
    public static void main(String args[]) 
    { 
        int n = 30; 
        System.out.print("Following are the prime numbers "); 
        System.out.println("smaller than or equal to " + n); 
        SieveOfEratosthenes g = new SieveOfEratosthenes(); 
        g.sieveOfEratosthenes(n); 
    } 
} 
  
