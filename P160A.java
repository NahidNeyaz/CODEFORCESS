//HQ9+
import java.util.Scanner;

public class P160A
{
    public static void main(String args[])
    {
        Scanner in = new Scanner (System.in);
        int n = in.nextInt();
        int a[]=new  int[n];
        int coinssum=0,mincoinssum=0,mincoins=0;
        for(int i=0;i<n;i++)
        {
            a[i]=in.nextInt();
            coinssum=coinssum+a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] < a[j + 1]) {
                    int t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            mincoinssum=mincoinssum+a[i];
            if(mincoinssum>(coinssum-mincoinssum))
            {
                mincoins++;
                break;
            }
            mincoins++;
        }
        System.out.println(mincoins);



    }
}