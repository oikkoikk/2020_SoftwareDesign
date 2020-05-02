def problemDescription():
    print("* Number of divisors *")
def getNumOfDivisors(number):
    count = 0
    for i in range(1, number+1):
        if(number % i == 0):
            count +=1
    return count
problemDescription()
print("Type the first number:")
A = int(input())
print("Type the second number:")
B = int(input())
print("Number of divisors of the first number is",getNumOfDivisors(A))
print("Number of divisors of the second number is",getNumOfDivisors(B))