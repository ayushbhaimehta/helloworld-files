letters = ["a", "bakwaas", "chu", "d", "e", "f", "g", "h"]
    
keys = []


for a in letters:
    if a == "a":
        continue
    for bakwaas in letters:
        if bakwaas=="bakwaas" or bakwaas==a:
            continue
        
        for chu in letters:
            if chu =="chu" or chu==a or chu == bakwaas:
                continue
            
            for d in letters:
                if d == "d" or d == a or d == bakwaas or d ==chu:
                    continue
                for e in letters:
                    if e =="e" or e == a or e ==bakwaas or e == chu or e==d:
                        continue
                    for f in letters:
                        if f=="f" or f ==a or f == bakwaas or f == chu or f ==d or f ==e :
                            continue
                        for g in letters:
                            if g =="g" or g ==a or g == bakwaas or g ==chu or g == d or g ==e or g == f:
                                continue
                            for h in letters:
                                if h == "h" or h == a or h == bakwaas or h == chu or h == d or h == e or h == f or h ==g :
                                    continue
                                keys.append({"a": a, "bakwaas": bakwaas, "chu": chu, "d": d, "e": e, "f":  f, "g": g, "h": h})
    


w = int(input())
letter= set(letters)
words = set()

for i in range(w):
    word = input()
    words.add(word)


secretMessage = input().split()
i = 0
j = 0
possibleKey = [False, None]
while i < len(secretMessage):
    
    
    while j<len(keys):
        secretWord = secretMessage[i]
        decryptedWord  = ""
        key = keys[j]
        for char in secretWord:
            if not char in letter:
                decryptedWord+=char    
            else:
                decryptedWord += key[char]
        if decryptedWord in words:
            
            i+=1
            possibleKey[0] = True
            possibleKey[1] = j
            break
        else:
            
            if possibleKey[0]:
                possibleKey[0] = False
                possibleKey[1] = None
                i = 0
            j+=1
    

decreypt = []
for secretWord in secretMessage:
    decryptedWord = ""
    for char in secretWord:
        if not char in letters:
            decryptedWord += char
        else:
            decryptedWord += keys[possibleKey[1]][char]
    decreypt.append(decryptedWord)

print(*decreypt)