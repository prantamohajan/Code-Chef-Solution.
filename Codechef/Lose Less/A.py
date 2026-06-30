T = int(input())
for _ in range(T):
    M, N = map(int, input().split())
    min_losses = M 
    for wins in range(M + 1):
        for ties in range(M - wins + 1):
            losses = M - wins - ties
            if 3 * wins + ties == N:
                min_losses = min(min_losses, losses)
    print(min_losses)