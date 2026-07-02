import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    
    if not data:
        return
    
    T = int(data[0])
    idx = 1
    
    out = []
    for _ in range(T):
        N = int(data[idx])
        K = int(data[idx+1])
        idx += 2
        
        A = [int(x) for x in data[idx : idx + N]]
        idx += N
        
        C = [int(x) for x in data[idx : idx + N]]
        idx += N
        
        max_profit = -float('inf')
        
        # Test each initial bid value as a candidate for X
        for X in A:
            costs = []
            for i in range(N):
                if A[i] >= X:
                    costs.append(0)
                else:
                    costs.append((X - A[i]) * C[i])
            
            # Find the K+1 cheapest people to upgrade
            costs.sort()
            min_cost = sum(costs[:K+1])
            
            profit = (K * X) - min_cost
            if profit > max_profit:
                max_profit = profit
                
        out.append(str(max_profit))
        
    print('\n'.join(out))

if __name__ == '__main__':
    solve()