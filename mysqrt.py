from numpy import sqrt
x=2.
s_numpy = sqrt(x)
s=1.

for k in range(10):
    s = 0.5*(s + x/s)

print(f"square root of {x} is {s}")
