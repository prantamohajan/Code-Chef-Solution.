# Second Largest Number Finder

for _ in range(int(input())):
          num= list(map(int, input().split()))
num.remove(max(num))
print(max(num))
