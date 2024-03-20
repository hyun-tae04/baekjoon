import sys
from collections import deque
n = int(input())
qew = deque()

for i in range(n):
  read = sys.stdin.readline().split()
  if read[0] == 'push':
      qew.append(read[1])
  if read[0] == 'pop':
      if len(qew) == 0:
          print(-1)
      else:
          print(qew.popleft())  
  if read[0] == 'size':
      print(len(qew))
  if read[0] == 'empty':
      if len(qew) == 0:
          print(1)
      else:
          print(0)
  if read[0] == 'front':
      if len(qew) == 0:
          print(-1)
      else:
          print(qew[0])
  if read[0] == 'back':
      if len(qew) == 0:
          print(-1)
      else:
          print(qew[-1])