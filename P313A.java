//Ilya and Bank Account
import java.util.Scanner;

public class P313A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String s1="",s2="";
        int i, r, c = 0;
        if (n >= 0)
            System.out.println(n);
        else {
            int t1 = Math.abs(n);
            for (i = t1; i > 0; i /= 10) {
                r = i % 10;
                c++;
                if (c >= 2){
                    s1 = r + s1;}
            }
            c = 0;
            for (i = t1; i > 0; i /= 10) {
                r = i % 10;
                c++;
                if (c !=2)
                    s2 = r + s2;
            }
            int ss1=Integer.parseInt(s1);
            int ss2=Integer.parseInt(s2);
            int t= Math.min(ss1,ss2);
            if (t==0)
                System.out.println(t);
            else
                System.out.println("-"+t);
        }
    }
}
