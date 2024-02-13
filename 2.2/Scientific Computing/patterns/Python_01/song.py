"""
DANIEL KARUME
SCT211-0072/2022
TUESDAY 12TH FEBRUARY, 2024
LAB ASSIGNMENT 03

This program prints a poem
"""

FLY = "fly"
SPIDER = "spider"
CAT = "cat"
BIRD = "bird"
DOG = "dog"
HORSE = "horse"
SNAKE = "snake"
FULL_STOP = "."
COMMA = ","


def line_one(animal: str, punct: chr = ","):
    print(f"There was an old woman who swallowed a {animal}{punct}")


def swallowed(swallow: str, catch: str):
    print(f"She swallowed the {swallow} to catch the {catch},")


def unique(sentence: str):
    print(f"{sentence}.")


def dont_know(animal: str):
    print(f"I don't know why she swallowed that {animal},")


def last_line():
    print("Perhaps she'll die.\n")


def main():
    line_one(FLY, FULL_STOP)
    dont_know(FLY)
    last_line()
    line_one(SPIDER)
    unique("That wriggled and iggled and jiggled inside her")
    swallowed(SPIDER, FLY)
    dont_know(FLY)
    last_line()
    line_one(BIRD)
    unique("How absurd to swallow a bird")
    swallowed(BIRD, SPIDER)
    swallowed(SPIDER, FLY)
    dont_know(FLY)
    last_line()
    line_one(CAT)
    unique("Imagine that to swallow a cat")
    swallowed(CAT, BIRD)
    swallowed(BIRD, SPIDER)
    swallowed(SPIDER, FLY)
    dont_know(FLY)
    last_line()
    line_one(DOG)
    unique("What a hog to swallow a dog")
    swallowed(DOG, CAT)
    swallowed(CAT, BIRD)
    swallowed(BIRD, SPIDER)
    swallowed(SPIDER, FLY)
    dont_know(FLY)
    last_line()
    line_one(SNAKE)
    unique("The life in wake, of a snake to take,")
    swallowed(SNAKE, DOG)
    swallowed(DOG, CAT)
    swallowed(CAT, BIRD)
    swallowed(BIRD, SPIDER)
    swallowed(SPIDER, FLY)
    dont_know(FLY)
    line_one(HORSE)
    unique("She died of course")


main()
