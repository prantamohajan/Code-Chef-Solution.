#Python Program to Find the Factorial of a Number Using a While Loop.

num = int(input())
factorial = 1
while num > 0:
          factorial *= num
          num-=1
print(factorial)