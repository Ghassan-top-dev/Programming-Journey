import random

choice = int(input("enter your choice: Rock (1) Paper (2) Scissors (3): "))

CPU_choice = random.randint(1,3)

if choice == 1 and CPU_choice == 1:
  print("Computer chose: Rock")
  print("tie!")
if choice == 1 and CPU_choice == 2:
  print("Computer chose: Paper")
  print("You lost!")
if choice == 1 and CPU_choice == 3:
  print("Computer chose: Scissors")
  print("You win")
if choice == 2 and CPU_choice == 1:
  print("Computer chose: Rock")
  print("You win")
if choice == 2 and CPU_choice == 2:
  print("Computer chose: Paper")
  print("tie")
if choice == 2 and CPU_choice == 3:
  print("Computer chose: Scissors")
  print("You lost!")
if choice == 3 and CPU_choice == 1:
  print("Computer chose: Rock")
  print("You lost!")
if choice == 3 and CPU_choice == 2:
  print("Computer chose: Paper")
  print("You win")
if choice == 3 and CPU_choice == 3:
  print("Computer chose: Scissors")
  print("tie")
