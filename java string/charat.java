

package strinjava;
import java.util.Scanner;

public class stringCharat {
    public static void main(String args[])
    {
        
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the string");
        
        String s=sc.nextLine();
        // System.out.println("enter the index number");
        // int i=sc.nextInt();
        for(int i=s.length()-1;i>=0;i--)
        {
            char ch=s.charAt(i);
             System.out.println(ch+""+i);
        }
         
        
        
        
    }
   
}
