import sys
input = sys.stdin.readline

T = int(input())
for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    
    total_or = 0
    for x in A:
        total_or |= x
    seg = 0
    cur_or = 0
    for x in A:
        cur_or |= x
        if cur_or == total_or:
            seg += 1
            cur_or = 0
    
    print(N - seg)