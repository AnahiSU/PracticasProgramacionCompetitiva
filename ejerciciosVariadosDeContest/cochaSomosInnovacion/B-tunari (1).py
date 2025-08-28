import math

def dist(x1, y1, x2, y2):
    return (math.sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)))

def same(x, y):
    eps = 0.000000001
    return abs(x - y) < eps



while True:
        try:
             
            numbers = input()
            v = numbers.split(" ")

            x1, y1, x2, y2, x3, y3 = int(v[0]), int(v[1]), int(v[2]), int(v[3]), int(v[4]), int(v[5])

            a = dist(x1, y1, x2, y2)
            b = dist(x1, y1, x3, y3)
            c = dist(x2, y2, x3, y3)

            if (same(c * c, a * a + b * b) or same(a * a, b * b + c * c) or same(b * b, a * a + c * c)):
                print("Si")
            else:
                print("No")
        except EOFError:
             break

        

