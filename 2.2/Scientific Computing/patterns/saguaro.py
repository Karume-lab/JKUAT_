"""
 xxx    xxxxxx
X---X  X/-----X
X---X  X//----X
X---X  X///---X
X---X  X////--X
X---X  X/////-X
 xxxxxxX~~~~~~X   xxx
       X-----\X  X---X
       X----\\X  X---X
       X---\\\X  X---X
       X--\\\\X  X---X
       X-\\\\\X  X---X
       X~~~~~~Xxxxxxx
       X~~~~~~X
       X~~~~~~X
       X~~~~~~X
       X~~~~~~X
       X~~~~~~X
       X~~~~~~X
"""

# Definition of constants
HYPHEN = "-"
UPPERCASE_X = "X"
LOWERCASE_X = UPPERCASE_X.lower()
TILDE = "~"
BACK_SLASH = "\\"
FORWARD_SLASH = "/"
LEAF_SIZE = 3
STEM_SIZE = 6


def spaces(count: int) -> str:
    """Constructs the spaces in between the characters

    Args:
        count (int): number of spaces to be printed

    Returns:
        str: the spaces
    """

    return " " * count


def char_multiplier(source: chr, count: int) -> str:
    """Constructs a string by repeating a single character (source) n times (count)

    Args:
        source (str): the character that forms the string
        count (int): number of x's being printed

    Returns:
        str: A string formed by concatenating source
    """

    return source * count


def format_x(middle: str) -> str:
    """Formats the text so that it is in between x's

    Args:
        middle (str): the string to be put in between x's

    Returns:
        str: the formatted string
    """

    return "X{}X".format(middle)


def top():
    """Constructs the string for the first line of the cactus"""
    return (
        spaces(1)
        + char_multiplier(LOWERCASE_X, LEAF_SIZE)
        + spaces(4)
        + char_multiplier(LOWERCASE_X, LEAF_SIZE * 2)
    )


def upper_stem_line(i: int) -> str:
    """Constructs the upper part of the stem

    Args:
        i (int): variable in the loop it is called in used to dynamically modify the string
    Returns:
        str: a single line of the stem
    """

    return


def middle_stem_line(i: int) -> str:
    """Constructs the middle part of the stem

    Args:
        i (int): variable in the loop it is called in used to dynamically modify the string
    Returns:
        str: a single line of the stem
    """

    return


def joint() -> str:
    """Constructs the joints of the cactus

    Returns:
        str: the joint of the cactus
    """

    return (
        spaces(1)
        + char_multiplier(LOWERCASE_X, STEM_SIZE)
        + format_x(char_multiplier("~", STEM_SIZE))
        + spaces(3)
    )


def upper_stem_segment():
    """Constructs the upper stem segment"""
    segment = ""
    for i in range(STEM_SIZE - 1):
        segment += (
            format_x(char_multiplier(HYPHEN, LEAF_SIZE))
            + spaces(2)
            + format_x(FORWARD_SLASH * (i + 1) + ("-" * (STEM_SIZE - (i + 1))))
        )
        if i < STEM_SIZE - 1:
            segment += "\n"
    return segment


def middle_stem_segment():
    """Constructs the middle stem segment"""
    segment = ""
    for i in range(STEM_SIZE - 1):
        segment += (
            spaces(7)
            + format_x(("-" * (STEM_SIZE - (i + 1)) + BACK_SLASH * (i + 1)))
            + spaces(2)
            + format_x(char_multiplier(HYPHEN, LEAF_SIZE))
        )
        if i < STEM_SIZE - 1:
            segment += "\n"
    return segment


def lower_stem_segment():
    """Constructs the lower stem segment"""
    segment = ""
    for i in range(STEM_SIZE - 1):
        segment += spaces(7) + format_x(char_multiplier(TILDE, STEM_SIZE))
        if i < STEM_SIZE - 1:
            segment += "\n"
    return segment


def main():
    """Entry point"""
    saguaro = (
        top()
        + "\n"
        + upper_stem_segment()
        + joint()
        + char_multiplier(LOWERCASE_X, LEAF_SIZE)
        + "\n"
        + middle_stem_segment()
        + spaces(4)
        + joint()[::-1]
        + "\n"
        + lower_stem_segment()
    )
    print(saguaro)


main()
