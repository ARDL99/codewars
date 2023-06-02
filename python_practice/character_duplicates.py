def duplicate_encode(word):
    word = word.lower() #converts the word to lowercase
    result = ""
    
    for char in word:
        if word.count(char) > 1:
            result += ")"
        else : 
            result += "("
        
    return result