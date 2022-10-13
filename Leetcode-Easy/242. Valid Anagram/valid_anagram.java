// https://leetcode.com/problems/valid-anagram/

class Solution {

    public boolean isAnagram(String s, String t) {
        if (s.length() != t.length()) {
            return false;
        }
        Map<Character, Integer> m = new HashMap<>();
        for (int i = 0; i < s.length(); i++) {
            m.put(s.charAt(i), m.get(s.charAt(i)) == null ? 1 : m.get(s.charAt(i)) + 1);
        }
        for (int i = 0; i < t.length(); i++) {
            m.put(t.charAt(i), m.get(t.charAt(i)) == null ? 1 : m.get(t.charAt(i)) - 1);
        }
        for (int val : m.values()) {
            if (val != 0) {
                return false;
            }
        }
        return true;

    }
    
}