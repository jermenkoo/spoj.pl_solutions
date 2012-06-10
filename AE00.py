n = int(input())
result, i = 0, 1
while True:
    square = pow(i, 2)
    if square > n:
        break
    result = result + 1
    square = square + i
    while square <= n:
        result = result + 1
        square = square + i
    i = i + 1
print(result)
    
    
