//Kefa and First Steps
import java.util.*;
public class P580A
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        int c = 1;
        int m = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1]) {
                c++;
            } else {
                c= 1;
            }
            m = Math.max(m, c);
        }
        System.out.println(m);
    }
}
