import random #Simple Guessing Game
num=random.randint(1,20) #Taking a random integer betwixt 1 and 20
print('\t\tWelcome to this stupid Game.\n I have a number in between 1 and 20\n Can you guess it?\n\n You have 5 guesses')
chance=1
while chance<6:
  chance+=1
  guess=int(input())
  if(guess==num):
    print("Yes you guessed it right! The number was "+str(num)+".")
    break
  elif (guess<num):
    print("No! Go a bit higher!")
  elif(guess>num):
    print("A bit lower son.")
if( chance>=6):
  print("Sorry son, better luck next time! BTW I was thinking of the number "+ str(num))