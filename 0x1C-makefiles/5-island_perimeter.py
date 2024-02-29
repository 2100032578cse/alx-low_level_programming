#!/usr/bin/python3
""" definition of the function"""


def island_perimeter(grid):
    """ this will return parameter of islandd"""

    c = 0
    length = len(grid)
    width = len(grid[0])
    size = 0

    for i in range(length):
        for j in range(width):
            if grid[i][j] == 1:
                size = size + 1
                if (j > 0 and grid[i][j - 1] == 1):
                    c = c + 1
                if (i > 0 and grid[i - 1][j] == 1):
                    c = c + 1
    return size * 4 - c * 2
