#!/usr/bin/python3
"""Calculate the perimeter of an island represented by a grid."""


def island_perimeter(grid):
    """Calculate the perimeter of an island represented by a grid.

    Args:
        grid (List[List[int]]): A 2D grid representing the island,
        where 1s represent land and 0s represent water.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    if 1 in grid[-1]:
        grid = grid + [len(grid[0]) * [0]]

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][-1] == 1:
                grid[i] = grid[i] + [0]
            if grid[i][j] == 1:
                if grid[i-1][j] == 0:
                    perimeter += 1
                if grid[i][j-1] == 0:
                    perimeter += 1
                if grid[i][j+1] == 0:
                    perimeter += 1
                if grid[i+1][j] == 0:
                    perimeter += 1

    return perimeter
