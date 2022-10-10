//Question Link : https://leetcode.com/problems/partitioning-into-minimum-number-of-deci-binary-numbers/

class Solution {
    public int minPartitions(String n) {
        return n.chars().max().getAsInt() - '0';
    }
}
