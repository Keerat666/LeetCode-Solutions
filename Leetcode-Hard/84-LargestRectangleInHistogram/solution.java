class Solution {
    public int largestRectangleArea(int[] heights) {
        int n = heights.length, res = 0;
        Deque<Integer> s = new LinkedList<>();
        s.offerLast(-1);
        
        for (int i = 0; i < n; i++) {
            if (s.peekLast() == -1 || heights[s.peekLast()] < heights[i]) {
                s.offerLast(i);
            } else if (heights[s.peekLast()] == heights[i]) {
                s.pollLast();
                s.offerLast(i);
            } else {
                while (s.peekLast() != -1 && heights[s.peekLast()] > heights[i]) {
                    res = Math.max(res, heights[s.pollLast()] * (i - s.peekLast() - 1));
                }
                s.offerLast(i);
            }
        }
        
        while (s.peekLast() != -1) {
            res = Math.max(res, heights[s.pollLast()] * (n - s.peekLast() - 1));
        }
        
        return res;
        
    }
}