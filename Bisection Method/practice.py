
def f(x):
    return x**3 - x**2 - 2

def bisection(f, a, b, tol):
    if f(a) * f(b) > 0:
        print("BiSection method fails")
        return None
    
    c = a

    while abs(0 - f(c)) >= tol:
        c = (a+b)/2

        if f(c) == 0:
            break

        if f(b) * f(c) < 0:
            a = c
        else:
            b = c
    
    return c

z = bisection(f, 1.5, 2, 1e-6)

print(z)
c = f(z)
print(c)