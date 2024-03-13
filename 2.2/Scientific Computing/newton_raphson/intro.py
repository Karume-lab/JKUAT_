from sympy import *

x = Symbol("x")
initial = 1

def get_function():
    return 2 * x ** 3 + x ** 2 - 1

def get_derivative():
    return diff(get_function())



derivative = diff(2 * x ** 3 + x ** 2 - 1)
print(solve(2 * x - 4, x))
