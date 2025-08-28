import math

def dist(x1, y1, x2, y2):
    return (((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)))

def same(x, y):
    return x == y

while True:
        try:
            numbers = input()
            v = numbers.split(" ")

            x1, y1, x2, y2, x3, y3 = int(v[0]), int(v[1]), int(v[2]), int(v[3]), int(v[4]), int(v[5])

            a = dist(x1, y1, x2, y2)
            b = dist(x1, y1, x3, y3)
            c = dist(x2, y2, x3, y3)

            if (same(c, a + b) or same(a, b + c) or same(b, a + c)):
                print("Si")
            else:
                print("No")
        except EOFError:
             break

        

