class Solution {
    public int lengthOfLastWord(String s) {
        int arraysize;
        String [] arrayofstr= s.split(" ");
        arraysize= arrayofstr.length;
        String word= arrayofstr[arraysize-1];
        return (word.length());
    }
}
