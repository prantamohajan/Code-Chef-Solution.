import math

for _ in range(int(input())):
    x, y = map(int, input().split())
    print(math.ceil((y - x) / 8))   