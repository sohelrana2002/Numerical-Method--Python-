import math

def f(x):
    return 3*x - math.cos(x) - 1


def secant_method(f, a, b, tol):
    x0 = a
    x1 = b

    if f(x0) * f(x1) >= 0:
        print("Secant Method fails")
        return None
    
    while abs(0 - f(x1)) >= tol:
        x2 = x1 - (f(x1)*((x1 - x0) / (f(x1) - f(x0))))
        x0 = x1
        x1 = x2

    return x2
    

z = secant_method(f, 0, 1, 1e-06)
print(z)
c = f(z)
print(c)
print(f"{c: .6f}")
   
