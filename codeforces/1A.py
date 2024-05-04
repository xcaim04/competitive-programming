import math
A, B, C = map(int, list(input().split(' ')))

print(math.ceil(A/C) * math.ceil(B/C))