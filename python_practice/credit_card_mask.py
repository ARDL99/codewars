# return masked string
def maskify(cc):
    #check if the length is less than or equal to 4
    if len(cc) <= 4:
        return cc
   #Mask all characters except the last 4 
    masked_chars = "#" *(len(cc) - 4)
    last_4 = cc[-4:]
    
    return masked_chars + last_4