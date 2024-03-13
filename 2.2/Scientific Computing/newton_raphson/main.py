import sympy as sp

# Defining Function
X = sp.symbols("x")
FUNCTION = 2 * X**3 + X**2 - 1
TOLERABLE_ERROR = 0.0001


def f(x):
    return FUNCTION.subs(X, x)


# Defining derivative of function
def f_prime(val):
    return sp.diff(FUNCTION, X).subs(X, val)


# Implementing Newton Raphson Method
def newton_raphson(x0, n, e):
    print("\n\n*** NEWTON RAPHSON METHOD IMPLEMENTATION ***")
    step = 1
    flag = 1
    condition = True
    while condition:
        if f_prime(x0) == 0.0:
            print("Divide by zero error!")
            break

        x1 = x0 - f(x0) / f_prime(x0)
        print(f"Iteration {step}, x1 = {x1:.2f} and f({x1:.2f}) = {f(x1):.2f}")
        x0 = x1
        step += 1

        if step > n:
            flag = 0
            break

        condition = abs(f(x1)) > e

    if flag == 1:
        print(f"\nRequired root is: {x1:.2f}")
    else:
        print("\nNot Convergent.")


# Input Section
x0 = float(input("Enter Guess: "))
e = float(input(f"Tolerable Error (press Enter for default {TOLERABLE_ERROR}): ") or TOLERABLE_ERROR)
n = int(input("Maximum Step: "))

# Starting Newton Raphson Function
newton_raphson(x0, n, e)
