# cook your dish here
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
        A = [int(x) for x in data[idx+2 : idx+2+N]]
        idx += 2 + N
        
        current_net_change = 0
        min_change = 0
        max_change = 0
        
        for change in A:
            current_net_change += change
            if current_net_change < min_change:
                min_change = current_net_change
            if current_net_change > max_change:
                max_change = current_net_change
                
        lower_bound = max(0, -min_change)
        upper_bound = min(K, K - max_change)
        
        if lower_bound <= upper_bound:
            out.append("Yes")
        else:
            out.append("No")
            
    print('\n'.join(out))

if __name__ == '__main__':
    solve()