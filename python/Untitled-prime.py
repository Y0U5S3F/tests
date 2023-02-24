def is_prime(n):
    x = True
    for j in range(2, n):
        if n % j == 0:
            x = False
    return x


for i in range(10, 2001):
    if is_prime(i) and is_prime(int(str(i)[::-1])):
        print(i)
