def main():
    goldy(0)









def diff(x,y):
    return y-x

def primes(n):
    p=[]
    for i in range(n):
        if i == 1:
            continue
        if i%2==0 and i != 2:
            continue
        elif i%3==0 and i != 3:
            continue
        elif i%5==0 and i != 5:
            continue
        elif i%7==0 and i != 7:
            continue
        p.append(i)

def goldy(n, c):

    if n < 3:
        return
    primes = primes(n)
    diffs = []
    for i in range(n):
        if i in primes:
            for j in range(-n, 1):
                if i-j == n:
                    diffs.append(i-j)

    count += 1
    goldy(diffs(max), count)







for i in range(100):
    if i == 1:
        continue
    if i%2==0 and i != 2:
        continue
    elif i%3==0 and i != 3:
        continue
    elif i%5==0 and i != 5:
        continue
    elif i%7==0 and i != 7:
        continue
    print(i)

main()