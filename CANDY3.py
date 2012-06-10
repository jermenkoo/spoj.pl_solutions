for i in range(int(input())):
    mlst = []
    space = input
    for j in range(reps):
        mlst.append(int(input()))
    if sum(mlst) % len(mlst) == 0:
        print("YES")
    else:
        print("NO")
