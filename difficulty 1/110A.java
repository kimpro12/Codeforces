import java.util.Scanner;
import java.util.Stack;
import java.util.ArrayList;

public class 110A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        String[] list = input.split("");
        int cnt = 0;
        for (String t : list) {
            if (t.equals("4") || t.equals("7")) {
                cnt++;
            }
        }
        if (cnt == 4 || cnt == 7) {
            write("YES");
        } else {
            write("NO");
        }

    }
    public static void write(String s) {
        System.out.println(s);
    }
}