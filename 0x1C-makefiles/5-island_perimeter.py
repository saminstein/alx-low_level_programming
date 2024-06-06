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

    # get the num of rows & cols
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1

                if i == i - 1 or grid[i + 1][j] == 0:
                    perimeter += 1

                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1

                if j == j - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
