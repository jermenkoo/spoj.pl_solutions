conv = {"kg": 2.2046, "lb": 0.4536, "l": 0.2642, "g": 3.7854}
unit = {"kg": "lb", "lb": "kg", "l": "g", "g": "l"}

for i in range(int(input())):
    a, b = input().split()
    print("{} {:.4f} {}".format(i + 1, float(a) * conv[b], unit[b]))
