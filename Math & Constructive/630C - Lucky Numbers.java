import java.util.Scanner;

public class Main{
    static public void main(String...args){
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();

        long ans = (long)Math.pow(2, n+1) - 2;

        System.out.println(ans);
        
        s.close();
    }
}