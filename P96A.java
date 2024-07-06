//Football
import java.util.*;
public class P96A {
    public static int d(int i , String o,char c)//getting the position , the string , and the char at ith place
    {
        String ss=o.substring(i,i+7);// finding the string from i to i+7th pos
        if((c=='1'&&ss.equals("1111111"))||(c=='0'&&ss.equals("0000000")))// checking whether it is equal to the required string
            return(1);//yes then 1
        else
            return (0);// no then zero
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String o=in.nextLine();//input order
        int l=o.length();//length
        int r =0;//flag variable
        if(l>=7)//7 se bada if not then d not possible
        {
            for(int i=0;i<l;i++)//loop to go to each position
            {
                if((l-i)>=7){// checking the pos. has 7 more letters ahead of it
                    char c=o.charAt(i);// the char at that place
                    r=d(i,o,c);// sending it to function where it checks d or not
                    if(r==1)// if yes
                    {
                        System.out.println("YES");//print yes
                        break;// get out of the loop
                    }
                }
            }
        }
        if(r==0)// if no for the entire string then 0
            System.out.println("NO");// print no
    }
}
