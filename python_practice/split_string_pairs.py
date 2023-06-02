def solution(string):
    pairs = [string[i:i+2] for i in range(0, len(string), 2)]
    if len(string) % 2 != 0:
        pairs[-1] += '_'
    return pairs