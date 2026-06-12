#Candy Store 
t = int(input())
while t > 0:
    x, y = map(int, input().split())
    if y <= x:
        print(y)
    else:
        print(x + 2 * (y - x))
    t -= 1
