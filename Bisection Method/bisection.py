# =====f(x)= x**3 - x**2 - 2========

def f(x):
    return x**3 - x**2 - 2


def bisection_method(f, a, b, tol):
    #code here
    if f(a) * f(b) >= 0:
        print("Bisection method fails")
        return None
    
    c = a

    while abs(0 - f(c)) >= tol:
        c = (a+b)/2

        if f(c) == 0:
            break

        if f(c) * f(b) < 0:
            a = c

        else:
            b = c
    
    return c


#diver code
z = bisection_method(f, 1.5, 2, 1e-6)
print(z)
c = f(z)
print(c)
print(f"{c: .4f}")