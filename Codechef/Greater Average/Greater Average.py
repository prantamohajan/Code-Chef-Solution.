#Greater Average
T = int(input())
for _ in range(T):
    A, B, C = map(int, input().split())
    average = (A + B) / 2
    if average > C:
        print("YES")
    else:
        print("NO")