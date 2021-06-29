#Author-Sumit Suresh Patil
#Explanation: Program calculates amount of time you will live 
expected_life=int(input("Enter expected life: "))
current_age=int(input("Enter your current age: "))
years_remain=expected_life-current_age
days_remain = years_remain*365
weeks_remain = years_remain*52
months_remain = years_remain*12
print(f"You have {days_remain} days,{weeks_remain} weeks,{months_remain} months left in life")


