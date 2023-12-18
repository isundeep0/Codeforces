a, b, s = map(int, input().split())

val = s - abs(a) - abs(b)

if (val == 0 or (val > 0 and val%2 == 0)):
    print("Yes")
else:
    print("No")
