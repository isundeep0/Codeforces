import java.util.Scanner;

public class Main{
    static public void main(String...args){
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while (t-- != 0){

            int n, x;
        
            n = s.nextInt();
            x = s.nextInt();

            if (n < 3){
                System.out.println(1);
                continue;
            }

            int floor = 2;

            int k = 3;

            int cnt = 1;

            while (k != n){
                k++;
                cnt++;
                if (cnt == x+1){
                    ++floor;
                    cnt = 1;
                }
            }

            System.out.println(floor);


        }
        s.close();
    }
}