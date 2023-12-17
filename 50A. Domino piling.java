import java.util.Scanner;

public class Main{
    static public void main(String...args){
        Scanner s = new Scanner(System.in);
        int m = s.nextInt();
        int n = s.nextInt();

        System.out.println(m*n/2);
        
        s.close();
    }
}