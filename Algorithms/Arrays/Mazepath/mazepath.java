

import java.util.ArrayList;
import java.util.Scanner;

public class mazepath {
	public static void main(String[] args) {
		// TODO Auto-generated method stub

           Scanner s=new Scanner (System.in);
           System.out.println('Enter the rows');
            int m=s.nextInt();
            
           System.out.println('Enter the columns');
	        int n=s.nextInt();
	        int count1=count( 1 , n ,1 , m , 0);
	        System.out.println(count1);
	        ArrayList<String> result=mazepath(1 , n , 1 ,m);
	        System.out.println(result);
	        
	    }
	    public static ArrayList<String> mazepath(int cc , int ec , int cr , int er){
	        if(cr==er&&cc==ec){
	             ArrayList<String> base=new ArrayList();
	             base.add("");
	             return base;
	            
	        }
	        if(cr>er || cc>ec ){
	             ArrayList<String> myResult=new ArrayList();
	             return myResult;
	        }
	        ArrayList<String> myResult=new ArrayList();
	        ArrayList<String> hResult=mazepath(cc+1 , ec , cr , er);
	        ArrayList<String> vResult=mazepath(cc , ec , cr+1 , er);
	        for(int i=0 ; i<hResult.size() ; i++){
	            myResult.add('H'+hResult.get(i));
	            
	        }
	        for(int i=0 ; i<vResult.size() ; i++){
	            myResult.add('V'+vResult.get(i));
	            
	        }
	        return myResult;
	        
	    }
	    public static int count(int cc , int ec ,int cr , int er , int count1){
	        if(cc==ec && cr==er){
	            count1++;
	            return count1;
	        }
	        
	        if(cr<er){
	            count1=count(cc , ec , cr+1 , er , count1);
	        }
	        if(cc<ec){
	              count1=count(cc+1 , ec , cr , er , count1);
	        }
	       if(cr<er && cc<ec) {
	    	   count1=count(cc+1 , ec , cr+1 , er , count1);
	       }
	        return count1;
	    }
	  

}
