#A Python program that checks the user’s input marks and prints a letter grade using if,
#elif, and else statements.

marks = int(input())
if marks >90:
          print("A")
elif marks > 70:
          print("B")
elif marks>=40:
          print("C")
else:
          print("F")
