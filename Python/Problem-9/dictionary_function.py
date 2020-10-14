def printDict():
  n = int(input())
  D = {}
  for a in range(1, n+1):
    D[a] = a*a
  print(D, end="")
printDict()
