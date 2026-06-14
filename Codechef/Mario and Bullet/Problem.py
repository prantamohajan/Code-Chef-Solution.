import sys

def solve():
    input = sys.stdin.readline
    
    t = int(input())
    for _ in range(t):
        x, y, z = map(int, input().split())
        print(max(0, z - (y // x)))

if __name__ == '__main__':
    solve()