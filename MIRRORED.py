def mirrored(pair):
    if pair in ["pq", "qp", "bd", "db"]:
        print("Mirrored pair")
    else:
        print("Ordinary pair")

l = input()
print("Ready")
while(len(l) == 2):
    mirrored(l)
    l = input()
