mx_n = 100062
arr = [int() for x in range(mx_n)]
arr[0] = 1
arr[1] = 1

for i in range(2, 100062):
    arr[i] = arr[i - 1] + arr[i - 2]

t = int(input())
while t > 0:
    
    t -= 1

n = int(input())

