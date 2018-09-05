
import java.util.Scanner;

public class removedublicatechar {
    public static void main(String[] args) {
       Scanner sc=new Scanner(System.in);
       String str=sc.nextLine();
        System.out.println(removeDuplicateChars(str));
    }

    private static String removeDuplicateChars(String sourceStr) {
        // Store encountered letters in this string.
        char[] chrArray = sourceStr.toCharArray();
        String p = "";//target string

        // Loop over each character.
        for (char value : chrArray) {
            // See if character is in the target
            if (p.indexOf(value) == -1) {
                p+= value; // Use StringBuilder as shown below
            }
        }
        return p;
    }
}
