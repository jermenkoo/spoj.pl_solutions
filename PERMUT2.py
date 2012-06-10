def amb(n):
    for i in range(len(n)):
        num = n[i]
        if n[num - 1] != (i + 1):
            return False
    return True

def main():
    while True:
        n = int(input())
        if n == 0:
            break
        else:
            line = list(map(int, input().split()))
            print("ambiguous" if amb(line) else "not ambiguous")

    return

main()
