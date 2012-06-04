derp = input()
while derp != '.':
    a, b = map(str, derp.split())
    moj_str = a * int(b)
    for i in range(1, len(a)+1):
        print(moj_str)
        moj_str = moj_str[1:] + moj_str[:1]
    derp = input()
