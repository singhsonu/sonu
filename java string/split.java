

package strinjava;
import java.util.Scanner;
public class split {
     public static void main(String args[])
    {
      Scanner sc=new Scanner(System.in);
      String s=sc.nextLine();
       String[] words=s.split("\\s");
       String restring="";
       for(int i=0;i<=words.length-1;i++)
       {
           String word=words[i];
           String reword="";
          
           for(int k=word.length()-1;k>=0;k--)
           {
                reword= reword+word.charAt(k);
              
           }
         restring=restring+reword+" ";
       }
       System.out.println(restring);
        
        
    }
}
