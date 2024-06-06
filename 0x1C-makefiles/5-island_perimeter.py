#!/usr/bin/python3
"""
Module for island perimeter
"""


def island_perimeter(grid):
    '''
    Returns the perimeter of the island

    Attribute:
        grid (int): list of list of integers
    '''

    perimeter = 0

    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):

            # check if cell is land
            if grid[i][j] == 1:

                # check up neighbour
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1

                # check down neighbour
                if i == i - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

                # check left neighbour
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1

                # check right neighbour
                if j == j - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
