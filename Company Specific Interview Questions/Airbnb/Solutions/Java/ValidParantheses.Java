import java.util.Stack;

public class Paranthesis{

    public static boolean paranthesisBalanced(String expression){
        char expr[] = expression.toCharArray();
        
        // Creating emty stack
        Stack stack = new Stack();

        for(int i = 0;i<expr.length;i++){
            if(expr[i]=='{' || expr[i]=='[' || expr[i]=='(')
                stack.push(expr[i]);

            if(expr[i]=='}' || expr[i]==']' || expr[i]==')'){
                if(stack.isEmpty())
                    return false;
                else if(!matchesPair((char)stack.pop(),expr[i]))
                    return false;
            }
        }
        
            if(stack.isEmpty())
                return true;
            else    
                return false;
        }
        
     public static boolean matchesPair(char char1,char char2) {
        if(char1 =='{' && char2=='}')
            return true;
        if(char1 =='[' && char2==']')
            return true;
        if(char1 =='(' && char2==')')
            return true;
        else 
            return false;        
     }

    public static void main (String args[]){
        String expression = "(){[]}";
        if(expression.isEmpty() || paranthesisBalanced(expression)){
            System.out.println(true);
        }
        else
            System.out.println(false);
    }
}
