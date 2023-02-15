input = input("Enter a number: ")

checkInput = input.strip()
  
if not checkInput.isdigit():
    print("ERROR: INVALID INPUT")
else:
    number = int(checkInput) 

i = 0
j = 0

while i < number or i == number:
    if (i < number):
        print("%d + " %(i), end = " ")
    elif (i == number):
        print("%d = " %(i), end = " ")
    j = j + i
    i += 1

print(j)
print("")
