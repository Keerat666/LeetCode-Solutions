class Solution {
    
    static int[] prev_smaller(int arr[]){
        Stack<Integer> s = new Stack<>();
        int ps[] = new int[arr.length];

        for (int i=0; i < arr.length; i++) {
            while(!s.isEmpty() && arr[s.peek()]>=arr[i])
                s.pop();
            if(s.isEmpty())
                ps[i]=-1;
            else
                ps[i] = s.peek();

            s.push(i);
        }
        return ps;
    }

    static int[] next_smaller(int arr[]){
        Stack<Integer> s = new Stack<>();
        int ns[] = new int[arr.length];

        for (int i= arr.length-1; i >= 0; i--) {
            while(!s.isEmpty() && arr[s.peek()] >=arr[i])
                s.pop();
            if(s.isEmpty())
                ns[i]= arr.length;
            else
                ns[i] = s.peek();

            s.push(i);
        }
        return ns;
    }

    
    public int largestRectangleArea(int[] heights) {
        
        int ps[] = prev_smaller(heights);
        int ns[] = next_smaller(heights);
        int max = 0;
        for (int i = 0; i < heights.length; i++) {
            max = Math.max(max, (ns[i]-ps[i]-1)*heights[i]);
        }

        return max;
    }
}