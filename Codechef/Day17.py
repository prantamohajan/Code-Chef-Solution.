#Python Program to Compare Updated Values for Multiple Test Cases.

t = int(input())
for i in range(t):
          x,y = map(int,input().split())
          x+=y
          if(x>=y):
                    print("Yes")
          else:
                    print("No")
