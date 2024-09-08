# --------function here--------
import math
def f(x):
    return (3*x) - math.cos(x) - 1

def false_position(f, a, b, tol):
    if f(a) * f(b) > 0:
        print("False position method fails")
        return None
    
    c = a
    while abs(0 - f(c)) >= tol:
        c = a - ((f(a) * (a-b)) / (f(a) - f(b)))

        if f(c) == 0:
            return c

        if f(b) * f(c) < 0:
            a = c
        else:
            b = c

    return c

z = false_position(f, 0, 1, 1e-6)
print(z)
c = f(z)
print(c)
print(f"{c: .4f}")
