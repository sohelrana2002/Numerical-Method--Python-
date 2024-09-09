import math

# ----for function 3x-cosx-1----------
# def f( x ):
# 	return (3*x) - math.cos(x) - 1

# def derivF( x ):
# 	return 3 + math.sin(x)

# ----------for function x**3 - x**2 - 2-----
def f( x ):
	return x**3 - x**2 - 2

def derivF( x ):
	return 3*x**2 - 2*x

def newtonRaphson(f, derivF, x, tol ):
	h = f(x) / derivF(x)
	while abs(h) >= tol:
		h = f(x)/derivF(x)
		x = x - h
	
	return x
# ----for function 3x-cosx-1----------
# z = newtonRaphson(f, derivF, 0, 1e-6)
# print(z)
# c = f(z)
# print(f"{c: .4f}")

# ----------for function x**3 - x**2 - 2-----
z = newtonRaphson(f, derivF, 2, 1e-6)
print(z)
c = f(z)
print(f"{c: .4f}")
