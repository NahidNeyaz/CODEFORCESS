// Burenka Plays with Fractions
import java.util.*;
public class P1720A {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int t=in.nextInt();
        int cc=0;
        for(int i=0;i<t;i++)
        {
            int a= in.nextInt();
            int b= in.nextInt();
            int c= in.nextInt();
            int d= in.nextInt();
            long p= (long) a *d;
            long p1= (long) b *c;
            if(p==p1||((a==0)&&c==0))
                cc=0;
            else if(a==0 || c==0||p% p1==0||p1%p==0)
                cc=1;
            else if(p % p1!=0|| p1%p!=0)
                cc=2;
            System.out.println(cc);
        }


    }
}
