
public class ReverseInteger {
//find out whether the number is positive or negative
    public int reverse(int x) {
        boolean isNegative = false;
        if (x < 0) {
            isNegative = true;
            x = -x;
        }
        long reverse = 0;
//divide the number by 10 repeatedly until it becomes zero      
        while (x > 0) {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
// condition to check whether output is greater than given range            
      if (reverse > Integer.MAX_VALUE) {
            return 0;
        }
        return (int) (isNegative ? -reverse : reverse);
    }
}
