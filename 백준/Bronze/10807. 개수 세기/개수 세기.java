import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int[] ints = new int[201];

        for (int i = 0; i < N; i++) {
            int a = sc.nextInt();
            ints[a + 100]++;
        }

        int b = sc.nextInt();
        System.out.println(ints[b + 100]);

    }
}