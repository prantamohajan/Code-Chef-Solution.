# cook your dish here
import sys

def solve():

    input = sys.stdin.read
    data = input().split()
    
    if not data:
        return


    t = int(data[0])
    
    results = []
    idx = 1
    for _ in range(t):
        x = int(data[idx])
        y = int(data[idx+1])
        idx += 2
        
        total_seconds = 0
        current_temp = x
        
       
        while current_temp > y:
          
            seconds_needed = (current_temp + 9) // 10
            total_seconds += seconds_needed
            current_temp -= 1
            
        results.append(str(total_seconds))
    print('\n'.join(results))

if __name__ == '__main__':
    solve()