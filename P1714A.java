//Everyone Loves to Sleep
import java.util.*;
public class P1714A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();// test cases input
        for (int i = 0; i < t; i++) {
            int j, h = 0, m = 0, cm = 0;
            int na = in.nextInt();// number of alarms
            int hs = in.nextInt();// hours: sleep
            int ms = in.nextInt();// min: sleep
            int cms = (hs * 60) + ms;// convert min
            int[] ha = new int[na];// hour alarm
            int[] ma = new int[na];// minute alarm
            int a = Integer.MAX_VALUE;
            int cma = 0;// converted minute alarm
            for (j = 0; j < na; j++) {
                ha[j] = in.nextInt();// input h alarm
                ma[j] = in.nextInt();// input m alarm
                cma = (ha[j] * 60) + ma[j];// conv alarm min
                if (cms > cma)// add 24 hrs for alarm time smaller than current time
                    cma = cma + (24 * 60);// add 24 hrs
                a = Math.min(cma, a);// finding the min one
            }
            cm = Math.abs(a - cms);// mins of sleep
            h = cm / 60;// conv to hr
            m = cm % 60;// conv to min
            System.out.println(h + " " + m);// print
        }
    }
}