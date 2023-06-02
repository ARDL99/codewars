def square_digits(num):
    num_str = str(num)
    
    result = ""
    for digit in num_str:
        squared_digit = str(int(digit) ** 2)
        result += squared_digit
        
    return int(result)