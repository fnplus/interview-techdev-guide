import java.util.*;
public class DynamicArray{
  public static void main(String[] args){
      Scanner cin=new Scanner(System.in);
      int n=cin.nextInt();
      //operations on array
      ArrayList<Integer> list=new ArrayList<>();
      for(int i=0;i<n;i++){
          list.add(cin.nextInt());
      }
      for(Integer i:list){
            System.out.println(i);
            }
  }
}
