public boolean validateStackSequences(int[] pushed, int[] popped) {
    Stack<Integer> stack = new Stack<>();
    int i = 0;
    for (int x : pushed) {
        stack.push(x);
        while (!stack.empty() && stack.peek() == popped[i]) {
            stack.pop();
            i++;
        }
    }
    return stack.empty();
}