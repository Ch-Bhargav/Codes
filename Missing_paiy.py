test = int(input())
for i in range(test):
    n = int(input())
    freq = {}
    for i in range(n):
        x = int(input())
        if x in freq:
            freq[x] += 1
        else:
            freq[x] = 1
    for i in freq:
        if freq[i]%2 != 0:
            print(i)
            break