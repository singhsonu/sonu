
import java.util.Scanner;
public class sortstring {

    public static void main(String args[])
    {

        Scanner sc=new Scanner(System.in);
        String str=sc.nextLine();
        sortstring ob=new sortstring();
        ob.sortstr(str);
         }
     public void sortstr(String str)
     {     char temp;
         String p="";
         char []array=str.toCharArray();
         for(int i=0;i<array.length;i++)
         {
             for(int j=0;j<array.length;j++)
             {
                 if(array[i]<array[j])
                 {
                     temp=array[i];
                     array[i]=array[j];
                     array[j]=temp;


                 }



             }


         }

       for(int k=0;k<array.length;k++)
       {
           p=p+array[k];


        }

    System.out.println("aur sorted string is"+ p);



}
}
