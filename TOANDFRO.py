def to_fro(shift, string):
    answer = ''
    for i in range(shift):
        for j in range(len(string) // shift):
            if not (j & 1):
                answer += string[shift * j + i]
            else:
                answer += string[shift * (j + 1) - 1 - i]
    return answer

def main():
    a = int(input())
    while a != 0:
        b = input()
        print(to_fro(a, b))
        a = int(input())

main()
