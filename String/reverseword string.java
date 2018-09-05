
import java.util.Scanner;
public class reveseword {

public static void main(String rgs[])
{

    Scanner sc=new Scanner(System.in);
    String str=sc.nextLine();
    String reverstring="";
    String []words=str.split(" ");
     for(int i=0;i<words.length;i++)
     {
         String word=words[i];
         String revword="";
         for(int j=word.length()-1;j>=0;j--)
         {

             revword=revword+word.charAt(j);
            }

         reverstring=reverstring+revword+" ";

         }

    System.out.println(reverstring);


}



}
