def narcissistic( value ):
    num_str = str(value)
    base = len(num_str)
    total_sum = sum(int(digit) ** base for digit in num_str)
    
     #returns true or false if narcissistic number is found   
    return total_sum == value