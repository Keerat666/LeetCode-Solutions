public class RunningSum {
    public static void main(String[] args) {
        int[] a = new int[] { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        for (int i = 1; i < a.length; i++) {
            a[i] = a[i] + a[i - 1];
        }
        for (int i = 0; i < a.length; i++)
            System.out.print(a[i] + " ");
    }

}
