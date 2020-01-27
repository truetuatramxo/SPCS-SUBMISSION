import java.util.Scanner;
public class B {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int F;
        F = in.nextInt();
        String[] respects = new String[F];
        respects[0] = in.nextLine();
        for (int c=0;c<F;c++){
            respects[c] = in.nextLine();
        }
        for (int c=0;c<F;c++){
            System.out.println(respects[c]+": F");
        }
    }
}
