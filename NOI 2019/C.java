import java.util.Scanner;
public class C {
    public static void main(String args[]) {
        int elements;
        int TJ = 0;
        int si = 0;
        int log = 0;
        String input;
        Scanner in = new Scanner(System.in);
        elements = Integer.parseInt(in.nextLine());
        int[] numbers = new int[elements];
        String[] tapsilog = new String[elements];
        for (int c = 0;c<elements;c++){
            input = in.nextLine();
            String array[]=input.split(" ");
            numbers[c]= Integer.parseInt(array[0]);
            tapsilog[c]= (array[1]);
        }
        for (int c=0;c<elements;c++){
            for (int c1=0;c1<numbers[c];c1++){
                if (tapsilog[c].charAt(c1)=='T'){
                    TJ++;
                }
                if (tapsilog[c].charAt(c1)=='s'){
                    si++;
                }
                if (tapsilog[c].charAt(c1)=='l'){
                    log++;
                }
            }
            System.out.println(TJ+" "+si+" "+log);
            TJ=si=log=0;
        }
    }
}
