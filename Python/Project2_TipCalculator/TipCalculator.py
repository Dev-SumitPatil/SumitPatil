#If the bill was $150.00, split between 5 people, with 12% tip.
#Each person should pay (150.00 / 5) * 1.12 = 33.6
#Format the result to 2 decimal places = 33.60
#Tip: You might need to do some research in Google to figure out how to do this.
print("Welcome to the Tip Caluclator")
total_bill = float(input("Enter your total bill: $"))
tip = int(input("Enter percentage of tip you would like to give 10,12 or 15: "))
tip = total_bill*12/100
total_bill = tip+total_bill
no_of_people = int(input("Number of people to split the bill: "))
to_pay = total_bill/no_of_people
print(f"Each person should pay: ${round(to_pay,2)}")
