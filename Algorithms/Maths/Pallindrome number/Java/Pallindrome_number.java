import java.util.Scanner;

public class Pallindrome_number
{
	public static void main(String[] args) {
	    
		    System.out.println("input a number:");
            
            Scanner read = new Scanner(System.in);
            String in = read.nextLine();
            
            int num= Integer.parseInt(in);
            int newNum=0;
            int temp = num;
        	
        
        	while(num!=0) {
        		newNum= newNum *10 + num%10;
        		num /= 10;
        	}
        	if(temp == newNum)
        		System.out.println("it is a pallindrome number");
        	else
        		System.out.println("it is NOT a pallindrome number");
	}
}