//Even Odds
import java.util.Scanner;
public class P318A
{
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        long n=in.nextLong();
        long p=in.nextLong();
        long o=(n+1)/2;
        if(o>=p)//odd
        {
            long s=(2*p)-1;
            System.out.println(s);

        }
        else if(o<p)//even
        {
            long s= (p-o)*2;
            System.out.println(s);
        }

    }
}
