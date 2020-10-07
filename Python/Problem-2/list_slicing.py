a, b = map(int, input().split())
list_1 = []
for i in range(a, b):
  list_1.append(a+1)
  a += 1
  if(b == a):
    break
for i in list_1:
  print(i)
