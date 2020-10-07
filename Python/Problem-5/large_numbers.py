fact_num = int(input())
factorial = 1
for i in range(1, fact_num+1):
  if fact_num < 0:
    print("Sorry, factorial does not exist for negative numbers")
  elif fact_num == 0:
    print("The factorial of 0 is 1")
  else:
    factorial = factorial * i
print(factorial)
