A, B = map(int, input().split())
n = A
# for i in range(A, B+1, 2):
#     print(i, end = ' ')

while n <= B:
    print(n, end = ' ')
    n += 2