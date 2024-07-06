//BAN BAN
import java.util.*;
public class P1747B {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=in.nextInt();
            int a=1;
            int k=0;
            int b=(n*3)-1;
            int o=(n+1)/2;
            System.out.println(o);
            while(k<o)
            {
                System.out.println(a+" "+b);
                a+=3;
                b-=3;
                k++;
            }

        }
    }
}
