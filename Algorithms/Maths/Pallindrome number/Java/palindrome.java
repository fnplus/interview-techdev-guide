
class palindrome {

    public boolean isPalindrome(Integer number){
        int start = 0;
        int end = number.toString().length()-1;
        boolean result = false;

        String [] numberStr = number.toString().split("");

        while(start < end){
            if(numberStr[start].equals(numberStr[end])){
                result = true;
            }else{
                result = false;
            }
            start++;
            end--;
        }

        return result;
    }


    public static void main(String[] args) {
        Palindrome palindrome = new Palindrome();

		System.out.println("Result False " + palindrome.isPalindrome(1231));
		System.out.println("Result True " + palindrome.isPalindrome(12321));


    }


}