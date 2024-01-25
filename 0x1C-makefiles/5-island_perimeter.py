#!/usr/bin/python3
def island_perimeter(grid=[[1]]):
    """Returns islnad primeter"""
    sum = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                sum += 4
                if j > 0 and grid[i][j - 1] > 0:
                    sum -= 2
                if i > 0 and grid[i - 1][j] > 0:
                    sum -= 2
    return sum
