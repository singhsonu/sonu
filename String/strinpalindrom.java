
import java.util.Scanner;
public class stringpalin {
 public static void main(String args[])
 {
 Scanner s=new Scanner(System.in);

     String reverse="";
    String str=s.nextLine();
    for(int i=str.length()-1;i>=0;i--)
    {
        reverse+=str.charAt(i);
    }
   if(str.equals(reverse))
       System.out.println("string is palindrome");
   else
      System.out.println("string is not  palindrome");

 }
}

