//Puzzles
import java.util.Scanner;

public class P337A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[m];
        int i, j, s = 0;
        for (i = 0; i < m; i++) {
            a[i] = in.nextInt();
        }
        for (i = 0; i < m; i++) {
            for (j = i + 1; j < m; j++) {
                if (a[i] > a[j])
                {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        long ss=100000000;
        for (i= 0; i < m; i++)
        {
            for (j= i; j < m; j += (n - 1))
            {
                if (i != j)
                {
                    s = Math.abs(a[i] - a[j]);
                    if (s < ss)
                    {
                        ss = s;
                    }

                }

            }
        }
        System.out.println(ss);

    }
}
