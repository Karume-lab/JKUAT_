def get_pyramid() -> None:
    """Prints an asterisk pyramid"""
    rows = 200
    while rows >= 200:
        rows = int(input("Enter number of rows: "))
    k = 0
    for i in range(1, rows + 1):
        for _ in range(1, (rows - i) + 1):
            print(end="  ")
        while k != (2 * i - 1):
            print("* ", end="")
            k += 1
        k = 0
        print()


get_pyramid()
