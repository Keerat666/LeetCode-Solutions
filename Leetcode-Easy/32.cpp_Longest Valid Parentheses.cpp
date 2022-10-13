/*Explanation -:

Create an empty stack and push -1 to it.
The first element of the stack is used
to provide a base for the next valid string.
Initialize result as 0.

If the character is '(' i.e. str[i] == '('),
push index'i' to the stack.

Else (if the character is ')')
a) Pop an item from the stack (Most of the
time an opening bracket)

b) If the stack is not empty, then find the
length of current valid substring by taking
the difference between the current index and
top of the stack. If current length is more
than the result, then update the result.

c) If the stack is empty, push the current index
as a base for the next valid substring.

Return result.

If still not able to visualize, Try to do a dry run with pen/paper.

C++ Code -:
*/
class Solution {
public:
	int longestValidParentheses(string s) 
	{
		int n=s.length();
		int result=0;
		stack<int> st;
		st.push(-1);
		for(int i=0;i<n;i++){
			if(s[i]=='('){
				st.push(i);
			}
			else{
				if(!st.empty()){
					st.pop();
				}
				if(!st.empty()){
					result=max(result,i-st.top());
				}
				else{
					st.push(i);
				}
			}
		}
		return result;

	}
};
