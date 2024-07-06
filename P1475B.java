//New Year's Number
import java.util.*;
public class P1475B {
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int t=  in.nextInt();
        for(int i=0;i<t;i++)
        {
            int n=in.nextInt();
            int k=n%2020;
            long  d= n-(2021L *k);
            if(n-(long)2021*k>=0 && (n-(long)2021*k) %2020==0)
            {
                System.out.println("YES");
            }
            else
                System.out.println("NO");
        }
    }
}
