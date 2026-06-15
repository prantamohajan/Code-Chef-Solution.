t = int(input())
d = {'A': 'T', 'T': 'A', 'C': 'G', 'G': 'C'}

for _ in range (t):
          n = int(input())
          s = input()

          print(''.join(d[ch] for ch in s))