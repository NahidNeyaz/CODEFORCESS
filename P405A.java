//Gravity Flip
import java.util.*;
public class P405A {
    public static void b(int[] a, int size)
    {
        Arrays.sort(a);
        int i=0;
        for(i=0;i<size;i++)
            System.out.print(a[i]+" ");
    }
    public static void main(String[] args) {
        Scanner in = new Scanner (System.in);
        int n= in.nextInt();
        int [] a= new int [n];
        for(int i=0;i<n;i++)
        {
            a[i]=in.nextInt();
        }
        b(a,n);
    }
}
