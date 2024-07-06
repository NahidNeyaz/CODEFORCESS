//Sale
import java.util.*;
public class P34B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        int c = in.nextInt();
        int[] a = new int[t];
        for (int i = 0; i < t; i++) {
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int cc = c;
        int s = 0;
        for (int i = 0; i < t; i++) {
            if (a[i] < 0 && cc != 0) {
                s = s + Math.abs(a[i]);
                cc--;
            } else if (cc == 0)
                break;
        }
        System.out.println(s);
    }
}
