# cook your dish here
import sys

def solve():
    input = sys.stdin.read
    data = input().split()
    
    if not data:
        return


    n = int(data[0])
    arr = [int(x) for x in data[1:n+1]]
    
    if n == 0:
        return

    leaders = []
    max_so_far = arr[-1]
    leaders.append(max_so_far)
    

    for i in range(n - 2, -1, -1):
        if arr[i] > max_so_far:
            leaders.append(arr[i])
            max_so_far = arr[i]
            
    leaders.reverse()
    print(*(leaders))

if __name__ == '__main__':
    solve()