
package Operations;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;

public class SieveOfEratosthenes 
{
    public static void main(String [] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        
        ArrayList<Boolean> primes = new ArrayList<>(n+1);
        for(int i=0; i<=n; i++)
            primes.add(true);
        primes.set(0, false);
        primes.set(1, false);
        
        for(int i=2; i<=Math.sqrt(n); i++)
        {
            if(primes.get(i))
            {
                int j = 2;
                while(i*j<=n)
                {
                    primes.set(i*j, false);
                    j++;
                }
            }
        }
        
        int s = 2;
        for(int i=2; i<=n; i++)
        {
            if(primes.get(i))
                System.out.print(i+" ");
        }
        System.out.println();
    }
}
