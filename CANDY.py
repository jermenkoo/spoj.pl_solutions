i = int(input())

while i != -1:
    array = []
    for _ in range(i):
        array += [int(input())]
    avg = (sum(array)) / len(array)
    rem = (sum(array)) % len(array)
    if rem > 0:
        print(-1)
    else:
        garr = [(num - avg) for num in array if num > avg]
        print(int(sum(garr)))
    i = int(input())
