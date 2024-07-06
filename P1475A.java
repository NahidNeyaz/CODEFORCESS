//Odd Divisor
import java.util.*;
public class P1475A {
    public static void o(long n) {

        if(n%2!=0)
            System.out.println("YES");
        else
        {int flag =0;
            while(n>=1)
            {
                n=n/2;
                if(n%2!=0&&n!=1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                System.out.println("YES");
            else
                System.out.println("NO");
        }
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        long[] n = new long[t];
        for (int i = 0; i < t; i++) {
            n[i] = in.nextLong();
            o(n[i]);
        }
    }
}
