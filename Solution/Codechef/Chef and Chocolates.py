t = int(input())

while t > 0:
    x, y, z = map(int, input().split())
    total_money = x * 5 + y * 10
    print(total_money // z)
    t -= 1