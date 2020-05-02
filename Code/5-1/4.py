import random
strToPrt = ''
def getRandomString(leng):
    global strToPrt
    strList=[]
    for i in range(leng):
        strList += list(chr(random.randint(97,122))) #a to z
    strToPrt +="".join(strList)
    return strToPrt
strLen = int(input())
print(getRandomString(strLen))
