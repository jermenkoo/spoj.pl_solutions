import sys
for smpl in sys.stdin.readlines():
    case = int(smpl) - 1
    print(case << 1 if case else 1)