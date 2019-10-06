import java.io.*; 
import java.util.*; 
   
public class PerfectNumber { 

    public static boolean isPalindrome(int n)  
    {  
        // if divisible by 11 then true  
        if (n % 11 == 0)  
        {  
            return true;  
        }  
      
        // if not divisible by 11  
        return false;  
    }
	public static void main(String args[]) { 
		int i,n,j,flag,number;
		Scanner in = new Scanner(System. in);
        System.out.println("Input number ");
        i = in.nextInt();
   
        
			for(n=10;n<=i;n++)
			{
				int l=Integer.toString(n).length();
				if(l%2==0){
					flag=1;
					number=n;
					while(number>0)
					{
					    
						 int digit = number % 10;
						 if(!(digit==4 || digit==5))
						 {
							 flag=0;
						 }
						  number=number/10;
						 
					}
					if(flag==1)
					{
					    
						
						boolean num=isPalindrome(n);
						
						if(num)
						{
							System.out.println(n);
						}
					}
				}
				
				
			}
			
		 
	}
}		