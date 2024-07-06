
//Hossam and Combinatorics
import java.util.*;
public class P1771A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t= in.nextInt();
        for(int i=0;i<t;i++)
        {
            int n= in.nextInt();
            int[] nn= new int [n];
            int j=0,hh=0,mm=0;
            int h=Integer.MIN_VALUE;
            int m=Integer.MAX_VALUE;
            long  c=0;
            for(j=0;j<n;j++)
            {
                nn[j]= in.nextInt();
                h=Math.max(h,nn[j]);
                m=Math.min(m,nn[j]);
            }
            Arrays.sort(nn);
            for(j=0;j<n;j++)
            {
                if(nn[j]==h)
                    hh++;
                if(nn[j]==m)
                    mm++;
            }
            if(h==m)
                c= (long) n *(n-1);
            else
                c= (long) hh *mm*2;

            System.out.println(c);
        }
    }
}
