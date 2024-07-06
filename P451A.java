//Game With Sticks
import java.util.Scanner;

public class P451A
{
    public static void main(String[] args)
    {
        Scanner in =new Scanner(System.in);
        int n=in.nextInt();
        int m=in.nextInt();
        int tm= n*m;
        int l=Math.min(n,m);
        if((l%2!=0))
            System.out.println("Akshat");
        else
            System.out.println("Malvika" );
    }
}