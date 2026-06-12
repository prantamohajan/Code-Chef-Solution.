#Loops with Conditional Statements.

for i in range(int(input())):
          x, y = map(int, input().split())
          if x + y >= 7:
                    print("YES")
          else:
                    print("NO")