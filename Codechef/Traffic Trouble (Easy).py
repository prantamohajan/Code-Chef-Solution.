# cook your dish here
import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    
    if not data:
        return
    
    iterator = iter(data)
    num_test_cases = int(next(iterator))
    
    out = []
    for _ in range(num_test_cases):
        N = int(next(iterator))
        K = int(next(iterator))
        
        X = [int(next(iterator)) for _ in range(N)]
        S = [int(next(iterator)) for _ in range(N)]
        
       
        unhappy = [False] * N
        
       
        steps = min(K, N)
        
        f = list(X)
        for _ in range(steps):
            next_f = [0] * N
            for i in range(N - 1):
                
                next_f[i] = min(f[i] + S[i], f[i + 1] - 1)
                if next_f[i] == f[i]:
                    unhappy[i] = True
            
            
            next_f[N - 1] = f[N - 1] + S[N - 1]
            f = next_f
            
        
        out.append(str(sum(unhappy)))
        
    print('\n'.join(out))

if __name__ == '__main__':
    solve()