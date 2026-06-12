// Alice and Marks

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
          public static void main(String[] args) {
                    Scanner sc = new Scanner(System.in);
                    int x = sc.nextInt();
                    int y = sc.nextInt();

                    // Check if Alice's score is at least twice Bob's score
                    if (x >= 2 * y) {
                              System.out.println("Yes");
                    } else {
                              System.out.println("No");
                    }
          }
}