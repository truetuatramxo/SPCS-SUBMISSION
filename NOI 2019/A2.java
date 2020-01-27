import java.util.Scanner;
public class A2 {
    public static void main(String args[]){
        int[] heights = new int[4];
        int h;
        Scanner in = new Scanner(System.in);
        for (int c=0;c<4;c++){
            heights[c] = in.nextInt();
        }
        h = in.nextInt();
        if (heights[0]+heights[1]+heights[2]<=h&&heights[1]+heights[2]+heights[3]<=h&&heights[0]+heights[2]+heights[3]<=h&&heights[0]+heights[1]+heights[3]<=h){
            System.out.println("AWW");
        }
        else {
            System.out.println("WAW");
        }
    }
}
