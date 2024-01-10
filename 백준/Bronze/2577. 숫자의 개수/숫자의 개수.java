import java.util.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        int N = A * B * C;
        int[] ints = new int[10];

        String n = Integer.toString(N);

        for (int i = 0; i < n.length() ; i++) {
            int num = (int) (n.charAt(i) - '0');
            ints[num]++;
        }
        for (int i : ints) {
            System.out.println(i);
        }
    }
}