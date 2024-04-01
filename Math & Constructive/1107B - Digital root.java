import java.util.Scanner;

public class Main{
    static public void main(String...args){
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();

        while (n-- != 0){
            long k = s.nextLong();
            long x = s.nextLong();

            long ans = x + (k-1)*9;

            System.out.println(ans);
        }

        
        s.close();
    }
}