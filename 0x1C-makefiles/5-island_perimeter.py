#!/usr/bin/python3
def island_perimeter(grid):
    perimeter = 0
    for i in range(0, len(grid) - 1):
        for j in range(0, len(grid[i]) - 1):
            if grid[i][j] is 1:
                if i is 0:
                    perimeter += 1
                if j is 0:
                    perimeter += 1
                if i is (len(grid) - 1):
                    perimeter += 1
                if j is (len(grid[i]) - 1):
                    perimeter += 1
                if i > 0 and grid[i - 1][j] is 0:
                    perimeter += 1
                if j > 0 and grid[i][j - 1] is 0:
                    perimeter += 1
                if i < (len(grid) - 1) and grid[i + 1][j] is 0:
                    perimeter += 1
                if j < (len(grid[i])) - 1 and grid[i][j + 1] is 0:
                    perimeter += 1

    return perimeter
