#Author-Sumit Suresh Patil
#Explanation: Enter a two digit number, program will
#separate the two numbers and calculate sum of those numbers
while(True):
    two_digit=int(input("Enter two digit number: "))
    if (two_digit>9)and(two_digit<100):
        break
    else:
        print("Not Valid; Enter again !!")
        continue
two_digit=str(two_digit)
first=int(two_digit[0])
second=int(two_digit[1])
sum=first+second
print(f"Sum of those entered numbers is: {sum}")