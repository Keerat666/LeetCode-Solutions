public class Last_word {
    public int lengthOfLastWord(final String a)
    {
        boolean char_flag = false;
        int len = 0;
        for (int i = a.length() - 1; i >= 0; i--) {
            if (Character.isLetter(a.charAt(i))) {
                char_flag = true;
                len++;
            }
            else {
                if (char_flag == true)
                    return len;
            }
        }
        return len;
    }
    public static void main(String[] args)
    {
        String input = "Hello World";
         Last_word l= new Last_word();
        System.out.println("The length of last word is " + l.lengthOfLastWord(input));
    }
}

