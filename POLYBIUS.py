p=input
for _ in[0]*int(p()):
    for c in p():
        c=ord(c)
        c-=c>73
        if c>64:print(2*c-c%5-119,' ',sep='',end='')
    print()