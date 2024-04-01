import math

h, l = map(int, input().split())

ans = (l*l - h*h)/(2*h)

print(f"{ans:.13f}")