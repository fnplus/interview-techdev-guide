import java.util.Scanner;
class Pallindrome_string{
	public static void pallindrome(String word){
		word = word.toLowerCase();
		word = word.replace(" ","");
		
		int c=0,x=word.length();
		for(int i=0;i<x;i++){
			if(word.charAt(i) == word.charAt(x-1-i)){
				c++;
			}
		}
		if(c == x)
			System.out.println("Pallindrom");
		else
			System.out.println("Not Pallindrom");
	}
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a word:");
		String word = sc.nextLine();
		
		pallindrome(word);
	}
}