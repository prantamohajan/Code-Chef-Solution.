T = int(input())
for _ in range(T):
    N, K = map(int, input().split())
    A = list(map(int, input().split()))
    
    total = sum(A) // 2
    count = 0
    
    for x in range(N):
        for y in range(x + 1, N):
            fans = A[x] + A[y] + total - A[x]//2 - A[y]//2
            if fans > K:
                count += 1
    
    print(count)