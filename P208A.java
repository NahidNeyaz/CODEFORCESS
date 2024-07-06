
//Dubstep

import java.util.Scanner;
public class P208A
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String input = in.nextLine();
        String ss="";
        String[] parts = input.split("WUB");
        int l= parts.length;
        for (int i=0;i<l;i++)
        {
            if(!parts[i].equals(" "))
                ss=ss+parts[i]+" ";
        }
        System.out.println(ss.trim());

    }
}
