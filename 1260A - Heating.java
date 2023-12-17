import java.util.Scanner;

public class Main{
    static public void main(String...args){
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();

        while (n-- != 0){
            int c = s.nextInt();
            int x = s.nextInt();

            int a = x%c;

            int ans = a*(x/c + 1)*(x/c + 1) + (c-a)*(x/c)*(x/c);

            System.out.println(ans);
        }

        
        s.close();
    }
}