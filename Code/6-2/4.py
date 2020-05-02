numOne, numTwo, numThree = input().split()

numOne = int(numOne)
numTwo = int(numTwo)
numThree = int(numThree)
min = numOne
max = numOne

if(numTwo <= numOne and numTwo <= numThree):
    min = numTwo
elif(numThree <=numOne and numThree <= numTwo):
    min = numThree

if(numTwo >= numOne and numTwo >= numThree):
    max = numTwo
elif(numThree >= numOne and numThree >= numTwo):
    max = numThree

print("min:",min)
print("max:",max)