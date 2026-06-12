# Scalene Triangle

t = int(input())

while t > 0:
    a, b, c = map(int, input().split())
    if a != b and b != c and a != c:
        print('Yes')
    else:
        print('No')
    t -= 1
