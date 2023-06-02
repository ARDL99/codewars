def high_and_low(numbers):
    num_list = numbers.split()
    num_list = [int(num) for num in num_list]
    high = str(max(num_list))
    low = str(min(num_list))
    return high + " " + low