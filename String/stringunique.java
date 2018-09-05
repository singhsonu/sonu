import java.util.ArrayList;
import java.util.Collection;
import java.util.HashSet;
import java.util.Scanner;
public class string1 {


    public static void main(String[] args) {
        boolean result;
       Scanner sc=new Scanner(System.in);
       String str=sc.nextLine();
       result=method(str);
       System.out.println("given string is" + result);
    }
    public static boolean method(String inp)
    {
       boolean result=false;
       for(char ch:inp.toCharArray())
       {
           if(inp.indexOf(ch)==inp.lastIndexOf(ch))
                   result=true;
           else
               result=false;
           break;
              }

        return result;


    }

}
