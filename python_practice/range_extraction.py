def solution(lst):
    result = []
    i = 0

    while i < len(lst):
        start = lst[i]
        end = start

        while i+1 < len(lst) and lst[i+1] == end + 1:
            end = lst[i+1]
            i += 1

        if end - start >= 2:
            result.append(str(start) + '-' + str(end))
        elif end - start == 1:
            result.append(str(start) + ',' + str(end))
        else:
            result.append(str(start))

        i += 1

    return ','.join(result)
