import random

strInput = ''
replacedStr =''
mouseAlphabet = ''
selectedAlphabet = []
playCount = 0
underbar = '______________________________'
charac = 'a b c d e f g h i j k l m n o p q r s t u v w x y z'.split()

def mouseEating(playCount):
    global mouseAlphabet
    global selectedAlphabet
    global charac
    while(True):
        instant = str(charac[random.randint(0,25)])
        if(instant not in selectedAlphabet):
            mouseAlphabet+=instant
            selectedAlphabet +=instant
            break
        else:
            instant = instant.replace(instant,'')
        
    print("Start eating '" + mouseAlphabet[playCount] + "'")
    print("Eaten alphabet of cheese : ", end = '')
    for i in range(0,playCount+1):
        print(mouseAlphabet[i]+ ' ', end= '')
    print()
    
def CheeseStatus(playCount):
    global strInput
    global replacedStr
    global mouseAlphabet
    print("Original cheese : " + strInput)
    for i in range(0,strLen):
        if(mouseAlphabet[playCount] == strInput[i]):
            replacedStr = replacedStr[:i]+ underbar[i:i+1] + replacedStr[i+1:]
            
    print("Current cheese status : " + replacedStr)
    print()
    
def getRandomString(strLen):
    global strInput
    global replacedStr
    if(10<=strLen<=30):
        for i in range(strLen):
            strInput += chr(random.randint(97,122)) #a~z
        print("Generated Cheese is '" + strInput + "'")
        replacedStr = strInput
        
strLen = int(input("Input the length of the string : "))
getRandomString(strLen)
print("Mouse starts eating!!")
while(playCount < 10):
    mouseEating(playCount)
    CheeseStatus(playCount)
    playCount += 1
if(replacedStr in '______________________________'): #maximum size of Input
    print('Out of cheese!')
else:
    print("Finally remained Cheese status : ")
    print("Eaten alphabet of cheese : ", end = '')
    for i in range(0,10):
        print(mouseAlphabet[i]+ ' ', end= '')
    print()
    CheeseStatus(9)
    
