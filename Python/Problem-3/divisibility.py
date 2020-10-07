a = int(input())
list_1 = []
j = 1
count = 0
for i in range(50):
  list_1.append(j)
  j += 1

for i in list_1:
  if(a == i):
    list_1.remove(a)
for i in list_1:
  if(i % a == 0):
    count += 1
print(count)
