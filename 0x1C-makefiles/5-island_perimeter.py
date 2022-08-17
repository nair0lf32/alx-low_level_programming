#!/usr/bin/python3
"""The island perimeter challenge"""


def island_perimeter(grid):
    """calculates the perimeter of an island described by 
    grid parameter (a list of list of integers).
    0 = a water zone
    1 = land zone
    One cell is a square with side length 1
    """
    grid_w = len(grid[0])
    grid_h = len(grid)
    size = 0
    land = 0
    perimeter = 0

    for i in range(grid_h):
        for j in range(grid_w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    land += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    land += 1
    perimeter = (size * 4) - (land * 2)
    return perimeter
