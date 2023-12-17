import java.util.Scanner;

public class Main{
    static public void main(String...args){
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();

        int ans = (n-2)/4;

        if (n%2 == 1){
            ans = 0;
        }

        System.out.println(ans);

        
        s.close();
    }
}