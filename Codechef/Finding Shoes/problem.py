t = int(input())

for _ in range(t):
    N , M = map(int, input().split())
    if M >= N:
        print(N)
    else:
        print(2 * N-M)