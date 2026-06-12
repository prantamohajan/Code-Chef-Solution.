#Python program that reads t pairs of numbers and prints the sum of each pair.

t = int(input())
for i in range(t):
          a,b = map(int,input().split())
          ans = (a+b)
          print(ans)