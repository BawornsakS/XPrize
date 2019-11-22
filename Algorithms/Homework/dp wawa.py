def order(n, m):
    if n < m:
        return n, m
    return m, n


arr = []


def get_from_arr(n, m):
    (a, b) = order(n, m)
    return arr[a][b]


def findMin(a, b):
    min = a * b
    if a == b:
        return 0
    for i in range(1, int((a + 1) / 2) + 1):
        cut = get_from_arr(i, b) + get_from_arr(a - i, b) + 1
        if cut < min:
            min = cut
    for i in range(1, int((b + 1) / 2) + 1):
        cut = get_from_arr(a, i) + get_from_arr(a, b - i) + 1
        if cut < min:
            min = cut
    return min


def Chompo_bar(n, m):
    (a, b) = order(n, m)
    # create array
    for i in range(a + 1):
        new = []
        for j in range(b + 1):
            new.append(0)
        arr.append(new.copy())
    
    for i in range(1, a + 1):
        for j in range(i + 1, b + 1):
            arr[i][j] = findMin(i, j)
    
    for i in range(1, a + 1):
        for j in range(1, b + 1):
            print("{:2d}".format(arr[i][j]), end=' ')
        print()
    
    return arr[a][b]


print(Chompo_bar(18, 12))
