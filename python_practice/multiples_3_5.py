def solution(number):
    #returns 0 when number is negative
    if number < 0: 
        return 0
    #initializes sum to 0
    sum = 0
    #calculates the sum of numbers that are multiples of 3 or 5
    for i in range(number): 
        if i % 3 == 0 or i % 5 == 0:
            sum += i
    return sum