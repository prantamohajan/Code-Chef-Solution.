for _ in range(int(input())):
          n,x = map(int,input().split())
          print(min(x, abs(n - x)))