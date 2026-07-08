
t = int(input())
while(t > 0):
    a , b , c , d = map(int,input().split())
    e = abs(a - c)
    f = abs(b - d)
    print(max(e , f))
    t -= 1