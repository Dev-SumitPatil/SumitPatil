row, col = map(int, input().split())
count = 1
for i in range(row):
  for j in range(col-1):
    print(count, end=" ")
    count += 1
  print(count)
  count += 1
