import java.util.Scanner;

public class Main{
    static public void main(String...args){
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();

        int a = 0, b = 0, c = 0;

        while (n-- != 0){
            a = a + s.nextInt();
            b = b + s.nextInt();
            c = c + s.nextInt();
        }

        if (a == b && b == c && c == 0){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }

        
        s.close();
    }
}