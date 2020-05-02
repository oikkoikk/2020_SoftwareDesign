Student = {}
count = 0
def InputNameScore():
    global count
    studentName , studentScore = input().split()
    Student[studentName] = studentScore
    count +=1
    if(count <5):
        InputNameScore()

InputNameScore()
userInput = input("Which student's score?\n")
if(userInput in Student.keys()):
    print(userInput + "'s score: "+ (Student[userInput]))
else:
    print(userInput + " is not in the database.")
