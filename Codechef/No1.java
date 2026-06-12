//Positive Negative Zero Number Checker.

import java.util.Scanner;
public class No1 {
          public static void main(String[] args) {
                    Scanner sc = new Scanner(System.in);
                    for (int i = 0; i < 3; i++) {
                              int num = sc.nextInt();
                              System.out.println(num > 0 ? "Positive" : num < 0 ? "Negative" : "Zero");
                    }
                    sc.close();
          }
}
