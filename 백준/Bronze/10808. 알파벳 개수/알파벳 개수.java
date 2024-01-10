import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        int[] ints = new int[26];

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            ints[c - 97] += 1;
        }

        for (int i : ints) {
            System.out.print(i + " ");
        }

    }
}