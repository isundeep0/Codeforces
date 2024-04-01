import java.util.Scanner;

public class Main{
    static public void main(String...args){
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        while (t-- != 0){

            int l, r;
        
            l = s.nextInt();
            r = s.nextInt();

            if (l*2 > r){
                System.out.println("-1 -1");
            }
            else{
                System.out.println(l+" "+2*l);
            }


        }
        s.close();
    }
}