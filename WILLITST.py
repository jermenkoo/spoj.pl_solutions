def is_pow(n):
    if n == 0:
        return "TAK"
    elif not (n & (n - 1)):
        return "TAK"
    else:
        return "NIE"

print(is_pow(int(input())))
