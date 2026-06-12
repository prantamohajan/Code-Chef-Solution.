#Python program to count vowels in a given string.

str = input()
char = 0
i = 0
while i <len(str):
          c = str[i]
          if c =='a' or c=='e' or c=='i' or c=='o' or c=='u':
                    char +=1
          i+=1
print(char)
