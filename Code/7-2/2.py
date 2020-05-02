numOne, numTwo = input().split()

numOne = int(numOne)
numTwo = float(numTwo)

print("%10d%10d%10d" %(numOne*2, numOne*4, numOne*8))
print("%10.2f%10.2f%10.2f" %(numTwo*2, numTwo*4, numTwo*8))