a = int(input())
for i in range(a):
    print(" " * (a-(i+1))+"*" * (i+1) + "*" * i)
for i in range(a):
    print(" " * (i+1)+"*" * (a-i-1) + "*" * (a-i-2))