import math
n=int(input())
robot_move=[]
x=0
y=0
for robot in range(n):
  direction,magnitude=input().split()
  if direction=='UP':
    y=y+int(magnitude)
  if direction=='DOWN':
    y=y-int(magnitude)
  if direction=='RIGHT':
    x=x+int(magnitude)
  if direction=='LEFT':
    x=x-int(magnitude)
print(round(math.sqrt(x*x+y*y)),end="")