//Grade Checker.

import java.util.Scanner;
public class No2 {
          public static void main(String[] args) {
                    Scanner sc = new Scanner(System.in);
                    
                    for (int i = 0; i < 3; i++) {
                              int marks = sc.nextInt();
                              if (marks > 90)
                                        System.out.println("A");
                              else if (marks > 70)
                                        System.out.println("B");
                              else if (marks >= 40)
                                        System.out.println("C");
                              else
                                        System.out.println("F");
                    }
                    sc.close();
          }
}
