import java.util.Scanner;
class LastWord {
    public static int lengthOflastword(String s) {
        int len= 0;
        String w= s.trim();
        for (int i = 0; i < w.length(); i++) {
            if (w.charAt(i) == ' ')
                len = 0;
            else
                len++;
        }
 
        return len;
    }
       public static void main(String[] args)
    {
         Scanner sc= new Scanner(System.in);
            System.out.println("Please enter a sentence to find the length of the last word");
           String input = sc.nextLine();
        System.out.println("The length of last word is " + LastWord.lengthOflastword(input));
    }
}
